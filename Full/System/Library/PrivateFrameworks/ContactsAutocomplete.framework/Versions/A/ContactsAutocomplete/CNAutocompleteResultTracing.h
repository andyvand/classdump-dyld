/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNAutocompleteResultTracing : NSObject {

	unsigned long long _countOfRecentsResults;
	unsigned long long _countOfContactsResults;
	unsigned long long _countOfServerResults;
	double _startTime;
	double _localLatency;
	double _serverLatency;
	char _waitingForRecentsResults;
	char _waitingForContactsResults;
	char _waitingForServerResults;

}

@property (assign) unsigned long long countOfRecentsResults; 
@property (assign) unsigned long long countOfContactsResults; 
@property (assign) unsigned long long countOfServerResults; 
+(id)resultTracer;
-(void)setCountOfContactsResults:(unsigned long long)arg1 ;
-(void)setCountOfRecentsResults:(unsigned long long)arg1 ;
-(void)setCountOfServerResults:(unsigned long long)arg1 ;
-(void)logLocalLatencyIfReady;
-(void)sendMessageTracersIfReady;
-(void)logServerLatency;
-(void)sendMessageTracers;
-(void)sendLocalResultsTracer;
-(void)sendServerResultsTracer;
-(void)expectRecentsResults:(char)arg1 ;
-(void)expectContactsResults:(char)arg1 ;
-(void)expectServerResults:(char)arg1 ;
-(unsigned long long)countOfRecentsResults;
-(unsigned long long)countOfContactsResults;
-(unsigned long long)countOfServerResults;
-(id)init;
@end

