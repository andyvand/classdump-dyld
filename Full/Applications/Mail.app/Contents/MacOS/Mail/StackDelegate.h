/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StackDelegate <NSObject>
@optional
-(void)stackControllerWillStartStackingLayers:(id)arg1;
-(void)stackControllerDidStopStackingLayers:(id)arg1;
-(void)stackControllerWillStartAnimatingLayers:(id)arg1;
-(void)stackControllerDidStopAnimatingLayers:(id)arg1;
-(void)stackController:(id)arg1 dataLoadTimedOutInLayer:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willStackLayer:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willDisplayLayer:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willRemoveLayerForItem:(id)arg2;

@end
