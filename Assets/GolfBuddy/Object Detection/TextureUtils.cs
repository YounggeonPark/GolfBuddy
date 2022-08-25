using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class TextureUtils
{
    public static void CropV2(Texture2D source, Texture2D destination,int x, int y, int cropSize)
    {
        //  source 크기에 따른 보정
        if(x+cropSize > source.width)
        {
            x = source.width - cropSize;
        }
        if(y+cropSize > source.height)
        {
            y = source.height - cropSize;
        }
        //  crop 진행
        destination.SetPixels(source.GetPixels(x, y, cropSize, cropSize));
        destination.Apply();
    }

    public static Texture2D DeCompress(Texture2D source)
    {
        RenderTexture renderTex = RenderTexture.GetTemporary(
                    source.width,
                    source.height,
                    0,
                    RenderTextureFormat.Default,
                    RenderTextureReadWrite.Linear);

        Graphics.Blit(source, renderTex);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = renderTex;
        Texture2D readableText = new Texture2D(source.width, source.height);
        readableText.ReadPixels(new Rect(0, 0, renderTex.width, renderTex.height), 0, 0);
        readableText.Apply();
        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(renderTex);
        return readableText;
    }

}
