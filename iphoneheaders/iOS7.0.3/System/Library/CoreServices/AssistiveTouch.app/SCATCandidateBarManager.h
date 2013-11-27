/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>

@protocol SCATCandidateBarManagerDelegate;
@class , NSArray;

@interface SCATCandidateBarManager : SCATSimpleElementManager {

	<SCATCandidateBarManagerDelegate>* _delegate;
	NSArray* _typingCandidates;

}

@property (assign,nonatomic) <SCATCandidateBarManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * typingCandidates;                                //@synthesize typingCandidates=_typingCandidates - In the implementation block
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(BOOL)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(void)setTypingCandidates:(id)arg1 ;
-(BOOL)canBeActiveElementManager;
-(id)allElements;
-(void)didFetchElements:(id)arg1 foundNewElements:(BOOL)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(BOOL)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)typingCandidates;
@end
