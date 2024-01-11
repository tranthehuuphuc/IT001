//
//  TaiCheNen.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

if (candles == 0) return 0;
    if (candles > 0) return candles + candle(-candles, makeNew);
    if (-candles < makeNew) return 0;
    return (-candles) / makeNew + candle(-((-candles) / makeNew + (-candles) % makeNew), makeNew);
