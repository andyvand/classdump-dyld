/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:57:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Stickies.app/Contents/MacOS/Stickies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface StickiesSelfTest : NSObject {

	long long _iterations;
	long long _duration;
	double _startTime;

}
+(id)shared;
-(void)startTest:(long long)arg1 duration:(long long)arg2 ;
-(void)_performAllTests;
-(char)_openWindows;
-(char)_arrange;
-(char)_closeWindows;
-(void)_closeAllWindows;
-(id)init;
-(char)_save;
@end
