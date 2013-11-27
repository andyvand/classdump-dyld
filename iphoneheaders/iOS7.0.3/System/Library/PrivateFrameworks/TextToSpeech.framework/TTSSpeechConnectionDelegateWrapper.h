/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <TextToSpeech/TTSSpeechServiceDelegate.h>

@protocol TTSSpeechConnectionDelegate;
@class , TTSSpeechRequest, TTSSpeechClient, TTSSpeechConnection;

@interface TTSSpeechConnectionDelegateWrapper : NSObject <TTSSpeechServiceDelegate> {

	<TTSSpeechConnectionDelegate>* _delegate;
	TTSSpeechRequest* _request;
	TTSSpeechClient* _speechClient;
	TTSSpeechConnection* _connection;

}

@property (assign,nonatomic,__weak) <TTSSpeechConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TTSSpeechRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) TTSSpeechClient * speechClient;                               //@synthesize speechClient=_speechClient - In the implementation block
@property (assign,nonatomic,__weak) TTSSpeechConnection * connection;                      //@synthesize connection=_connection - In the implementation block
-(void)setRequest:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)request;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestMark:(int)arg1 didStartForRange:(NSRange)arg2 ;
-(id)speechClient;
-(void)setSpeechClient:(id)arg1 ;
-(void).cxx_destruct;
@end
