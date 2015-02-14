/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ReaderActivationDelegate <NSObject>
@optional
-(char)readerControllerShouldAnimateActivationIfPossible:(const ReaderController*)arg1;
-(void)readerControllerWillActivate:(const ReaderController*)arg1;
-(void)readerControllerDidActivate:(const ReaderController*)arg1;
-(void)readerControllerWillDeactivate:(const ReaderController*)arg1;
-(void)readerControllerDidDeactivate:(const ReaderController*)arg1;

@required
-(id)installationTargetForReaderController:(const ReaderController*)arg1;
-(char)readerControllerShouldActivateUponDeterminingAvailability:(const ReaderController*)arg1;

@end

