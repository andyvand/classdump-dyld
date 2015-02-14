/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/CALOperationPanelController.h>
#import <Calendar/CALRemotePublisherDelegate.h>

@class NSView, NSTextField, NSButton, NSMutableDictionary, CALPublishOperation, NSString;

@interface CALPublishPanelController : CALOperationPanelController <CALRemotePublisherDelegate> {

	NSView* publishView;
	NSTextField* nameField;
	NSButton* publishButton;
	NSButton* publishTodosCheckbox;
	NSButton* publishSubjectsCheckbox;
	NSButton* publishAlarmsCheckbox;
	NSButton* publishAttachmentsCheckbox;
	NSButton* publishChangesCheckbox;
	NSTextField* srvURLField;
	NSTextField* srvLoginField;
	NSTextField* srvPasswordField;
	id _autoresizeDelegate;
	char _nibLoaded;
	NSMutableDictionary* _pendingUnpublish;
	CALPublishOperation* _publishOperation;
	char _handleUnpublishCallbackInController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainController:(id)arg1 ;
-(char)publishNode:(id)arg1 ;
-(char)unpublishNode:(id)arg1 ;
-(char)changeLocation:(id)arg1 ;
-(void)unpublish:(id)arg1 ;
-(id)_getBaseURL;
-(void)enablePublishIfNecessary;
-(char)publishNode:(id)arg1 withUnpublish:(char)arg2 ;
-(void)validateSrvURL;
-(int)publishLoopForNode:(id)arg1 unpublish:(char)arg2 ;
-(void)_handleErrorForTitle:(id)arg1 url:(id)arg2 ;
-(int)unpublishModalPublication:(id)arg1 ;
-(void)unpublishDoneForRemotePublisher:(id)arg1 ;
-(int)publishLoopForNode:(id)arg1 ;
-(int)changeLocationForNode:(id)arg1 ;
-(void)startPublish:(id)arg1 ;
-(void)changeFilter:(id)arg1 ;
-(void)validateSrvURLField:(id)arg1 ;
-(void)checkConsistency;
-(id)init;
-(void)dealloc;
-(char)load;
-(void)cancel:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)remotePublisher:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)remotePublisher:(id)arg1 progressedToCurrentUnits:(unsigned long long)arg2 totalUnits:(unsigned long long)arg3 ;
-(void)abortOperation;
@end

