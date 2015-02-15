/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AssistantDelegate;
@class NSView, NSButton;

@interface Assistant : NSObject {

	id<AssistantDelegate> _delegate;
	NSView* _parentView;
	NSButton* _backButton;
	NSButton* _forwardButton;
	NSButton* _cancelButton;

}

@property (nonatomic,readonly) NSView * parentView;                              //@synthesize parentView=_parentView - In the implementation block
@property (nonatomic,readonly) NSButton * backButton;                            //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,readonly) NSButton * forwardButton;                         //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,readonly) NSButton * cancelButton;                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<AssistantDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAssistentManager:(id)arg1 ;
-(void)goBackward;
-(void)weAreDone;
-(void)setupKeyViewLoop;
-(NSButton *)backButton;
-(NSButton *)forwardButton;
-(id)init;
-(void)setDelegate:(id<AssistantDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id<AssistantDelegate>)delegate;
-(void)goForward;
-(id)windowTitle;
-(NSButton *)cancelButton;
-(char)shouldStop;
-(NSView *)parentView;
@end
