/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMReaderWindowPlugInProxy <IMPlugIn>
@optional
-(id)handleKeyDownEvent:(id)arg1;
-(char)handleZoomWindow:(id)arg1;
-(void)prepareToToggleFullScreenWithCompletionBlock:(/*^block*/id)arg1;
-(void)contentViewAddedToWindowFrame:(id)arg1;
-(void)plugInWindowWillEnterFullScreen:(id)arg1;
-(void)plugInWindowWillEnterPostFullScreen:(id)arg1;
-(void)plugInWindowWillExitFullScreen:(id)arg1;
-(void)plugInWindowWillExitPostFullScreen:(id)arg1;
-(void)plugInWindowDidEnterFullScreen:(id)arg1;
-(void)plugInWindowDidExitFullScreen:(id)arg1;
-(char)notifiesWhenContentReadyForDisplay;
-(id)windowWillReturnUndoManager:(id)arg1;

@end
