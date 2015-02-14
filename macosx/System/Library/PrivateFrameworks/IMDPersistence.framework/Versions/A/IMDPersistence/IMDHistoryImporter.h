/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMDPersistence/IMDPersistence-Structs.h>
@interface IMDHistoryImporter : NSObject {

	unsigned long long _filesImported;
	unsigned long long _messagesImported;
	unsigned long long _messagesSkipped;
	unsigned long long _messageErrors;
	char _loggingEnabled;
	char _testing;
	float _lastProgress;

}

@property (assign) unsigned long long filesImported;                 //@synthesize filesImported=_filesImported - In the implementation block
@property (assign) unsigned long long messagesImported;              //@synthesize messagesImported=_messagesImported - In the implementation block
@property (assign) unsigned long long messagesSkipped;               //@synthesize messagesSkipped=_messagesSkipped - In the implementation block
@property (assign) unsigned long long messageErrors;                 //@synthesize messageErrors=_messageErrors - In the implementation block
@property (assign) char loggingEnabled;                              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (assign) char testing;                                     //@synthesize testing=_testing - In the implementation block
-(void)setLoggingEnabled:(char)arg1 ;
-(char)importHistoryFromPath:(id)arg1 recursive:(char)arg2 database:(CSDBSqliteDatabase*)arg3 connection:(CSDBSqliteConnection*)arg4 ;
-(void)_messagesSkipped:(unsigned long long)arg1 ;
-(void)_messagesImported:(unsigned long long)arg1 ;
-(void)_messagesErrors:(unsigned long long)arg1 ;
-(void)_updateProgress:(float)arg1 ;
-(char)_importHistoryFromPath:(id)arg1 recursive:(char)arg2 database:(CSDBSqliteDatabase*)arg3 connection:(CSDBSqliteConnection*)arg4 isFirstRun:(char)arg5 ;
-(void)_fileImported;
-(char)loggingEnabled;
-(unsigned long long)messagesImported;
-(void)setMessagesImported:(unsigned long long)arg1 ;
-(unsigned long long)messagesSkipped;
-(void)setMessagesSkipped:(unsigned long long)arg1 ;
-(unsigned long long)messageErrors;
-(void)setMessageErrors:(unsigned long long)arg1 ;
-(unsigned long long)filesImported;
-(void)setFilesImported:(unsigned long long)arg1 ;
-(char)testing;
-(void)setTesting:(char)arg1 ;
-(id)init;
-(void)_importFile:(id)arg1 ;
@end

