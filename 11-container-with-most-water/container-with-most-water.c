int maxArea(int* height, int heightSize) {
    int maxVol = 0;
   

    int lowerPoint = 0;
    int upperPoint = heightSize - 1;
    int w, h;

    while (lowerPoint < upperPoint)
    {
        w= upperPoint - lowerPoint;

        // Equivalent to min()
        if (height[lowerPoint] < height[upperPoint])
            h = height[lowerPoint];
        else
            h = height[upperPoint];

        int currentVol = w * h;

        // Equivalent to max()
        if (currentVol > maxVol)
            maxVol = currentVol;

        if (height[lowerPoint] < height[upperPoint])
            lowerPoint++;
        else
            upperPoint--;
    }
    return maxVol;

}