/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLSeamlessOpenerDelegate <NSObject>
@optional
-(id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
-(id)seamlessOpener:(id)arg1 sourceBubbleForPreviewItem:(id)arg2;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 windowLevel:(long long*)arg4;
-(int)seamlessOpener:(id)arg1 supportForPreviewItem:(id)arg2;
-(void)seamlessOpener:(id)arg1 openedItem:(id)arg2 seamlessly:(char)arg3;
-(void)seamlessOpener:(id)arg1 failedToOpenItems:(id)arg2 withError:(id)arg3;
-(id)seamlessOpener:(id)arg1 transientImageAtFrame:(CGRect*)arg2 forItem:(id)arg3;
-(id)seamlessOpener:(id)arg1 transientWindowForItem:(id)arg2;
-(CGRect*)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)seamlessOpenerTransientWindow:(id)arg1 level:(long long*)arg2;

@end

