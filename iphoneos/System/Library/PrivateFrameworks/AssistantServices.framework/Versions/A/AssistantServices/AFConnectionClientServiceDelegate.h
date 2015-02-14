/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFClientServiceDelegate.h>

@class AFConnection, NSString;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {

	AFConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(id)_connectionDelegate;
-(oneway void)shouldSpeakChanged:(char)arg1 ;
-(oneway void)requestDidFinish;
-(oneway void)requestDidReceiveCommandData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestDidReceiveCommandInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestReplyContextMayInitiateCall;
-(oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2 ;
-(oneway void)requestRequestedOpenURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestRequestedDismissAssistant;
-(oneway void)speechRecordingWillBegin;
-(oneway void)speechRecordingDidBegin;
-(oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecognized:(id)arg1 ;
-(oneway void)speechRecognitionDidFail:(id)arg1 ;
@end

