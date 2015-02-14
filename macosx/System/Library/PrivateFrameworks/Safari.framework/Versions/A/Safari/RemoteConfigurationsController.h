/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/NSURLConnectionDataDelegate.h>
#import <Safari/RemoteConfigurationConsumer.h>

@class NSMutableDictionary, NSTimer, NSURLConnection, NSURLResponse, NSMutableData, NSString;

@interface RemoteConfigurationsController : NSObject <NSURLConnectionDataDelegate, RemoteConfigurationConsumer> {

	NSMutableDictionary* _consumersByKey;
	unsigned long long _downloadAttemptsCount;
	NSTimer* _startDownloadTimer;
	double _successfulDownloadInterval;
	NSURLConnection* _connection;
	NSURLResponse* _response;
	NSMutableData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)scheduleInitialDownload;
-(void)addConsumer:(id)arg1 forKey:(id)arg2 ;
-(id)loadConfigurationForKeyFromDisk:(id)arg1 ;
-(char)remoteConfigurationsController:(id)arg1 didReceiveNewConfiguration:(id)arg2 forKey:(id)arg3 ;
-(void)_scheduleNextDownload;
-(id)loadConfigurationForKey:(id)arg1 fromURL:(id)arg2 ;
-(void)_initializeSuccessfulDownloadIntervalIfNeeded;
-(double)_intervalBeforeNextDownload;
-(id)_requestForDownloadingNewConfiguration;
-(void)_downloadCompleted;
-(id)_takeDataFromLoader;
-(char)_notifyConsumersOfNewConfigurations:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

