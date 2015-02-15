/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BU_TBackupView, BU_TBackupLayer, NSString;

@interface BU_TBackupCompletionDelegate : NSObject {

	int fAnimationKind;
	BU_TBackupView* fLayerView;
	BU_TBackupLayer* fLayer;
	NSString* fKey;

}
-(void)dealloc;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithAnimationKind:(int)arg1 withView:(id)arg2 withAnimationID:(id)arg3 forLayer:(id)arg4 ;
-(void)showTopSnapshotComplete;
-(void)hideTopSnapshotComplete;
-(void)prepareToRevealInAnimationComplete;
-(void)revealInAnimationComplete;
-(void)revealOutAnimationComplete;
-(void)promoteDemoteSnapshotAnimationComplete;
-(id)init:(int)arg1 withObject:(id)arg2 forKey:(id)arg3 ;
@end
