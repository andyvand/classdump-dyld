/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate.h>

@protocol CKSMSComposeRemoteViewControllerDelegate;
@class ;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate> {

	<CKSMSComposeRemoteViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <CKSMSComposeRemoteViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
@end
