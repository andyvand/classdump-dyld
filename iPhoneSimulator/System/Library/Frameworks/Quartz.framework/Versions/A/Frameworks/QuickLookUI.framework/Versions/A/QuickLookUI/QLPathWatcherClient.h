/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPathWatcherClient <NSObject>
@required
-(void)pathWatcher:(id)arg1 fileAtURLWasMoved:(id)arg2;
-(void)pathWatcher:(id)arg1 fileAtURLWasModified:(id)arg2 onlyAttributes:(char)arg3;
-(void)pathWatcher:(id)arg1 fileAtURLWasDeleted:(id)arg2;

@end

