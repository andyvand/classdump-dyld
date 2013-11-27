/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CNFSoundPlayerDelegateProtocol;
@class ;

@interface CNFAudioPlayer : NSObject {

	<CNFSoundPlayerDelegateProtocol>* _delegate;

}

@property (assign) <CNFSoundPlayerDelegateProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL playingSound; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stop;
-(BOOL)playingSound;
-(void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3 ;
-(void)playSelectedSound;
@end
