/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WVDisplay, NSArray;

@interface _WVGestureDisplayInfo : NSObject {

	WVDisplay* _display;
	NSArray* _windowInfos;

}

@property (nonatomic,retain) WVDisplay * display;                //@synthesize display=_display - In the implementation block
@property (nonatomic,retain) NSArray * windowInfos;              //@synthesize windowInfos=_windowInfos - In the implementation block
-(id)initWithDisplay:(id)arg1 windowInfos:(id)arg2 ;
-(NSArray *)windowInfos;
-(void)setWindowInfos:(NSArray *)arg1 ;
-(void)setDisplay:(WVDisplay *)arg1 ;
-(WVDisplay *)display;
@end
