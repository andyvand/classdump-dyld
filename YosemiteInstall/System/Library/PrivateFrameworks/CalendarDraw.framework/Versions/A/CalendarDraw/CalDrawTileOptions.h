/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarDraw.framework/Versions/A/CalendarDraw
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDraw/CalendarDraw-Structs.h>
#import <CalendarDraw/NSCopying.h>

@interface CalDrawTileOptions : NSObject <NSCopying> {

	char _selected;
	char _dimmed;
	char _declined;
	char _maybe;
	char _needsReply;
	char _canceled;
	char _large;
	char _dash;
	char _noBorder;
	char _outline;
	char _colorBar;
	char _fillDot;
	char _darkBackground;
	int _outlineColor;

}

@property (assign) char selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign) char dimmed;                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign) char declined;                    //@synthesize declined=_declined - In the implementation block
@property (assign) char canceled;                    //@synthesize canceled=_canceled - In the implementation block
@property (assign) char maybe;                       //@synthesize maybe=_maybe - In the implementation block
@property (assign) char needsReply;                  //@synthesize needsReply=_needsReply - In the implementation block
@property (assign) char colorBar;                    //@synthesize colorBar=_colorBar - In the implementation block
@property (assign) char darkBackground;              //@synthesize darkBackground=_darkBackground - In the implementation block
@property (assign) char fillDot;                     //@synthesize fillDot=_fillDot - In the implementation block
@property (assign) char noBorder;                    //@synthesize noBorder=_noBorder - In the implementation block
@property (assign) char outline;                     //@synthesize outline=_outline - In the implementation block
@property (assign) char large;                       //@synthesize large=_large - In the implementation block
@property (assign) char dash;                        //@synthesize dash=_dash - In the implementation block
@property (assign) int outlineColor;                 //@synthesize outlineColor=_outlineColor - In the implementation block
-(char)selected;
-(int)outlineColor;
-(void)setOutlineColor:(int)arg1 ;
-(void)setDimmed:(char)arg1 ;
-(void)setDeclined:(char)arg1 ;
-(void)setMaybe:(char)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(void)setColorBar:(char)arg1 ;
-(void)setDarkBackground:(char)arg1 ;
-(char)maybe;
-(char)colorBar;
-(void)setFillDot:(char)arg1 ;
-(char)dimmed;
-(char)large;
-(char)fillDot;
-(char)noBorder;
-(char)darkBackground;
-(char)declined;
-(char)canceled;
-(void)setLarge:(char)arg1 ;
-(void)setNoBorder:(char)arg1 ;
-(char)dash;
-(void)setDash:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)outline;
-(void)setOutline:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(char)needsReply;
-(void)setNeedsReply:(char)arg1 ;
@end

