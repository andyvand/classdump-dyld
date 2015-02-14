/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDSession, NSString;

@interface CDDevice : NSObject {

	CDSession* _session;
	int remoteDataNotificationToken;
	unsigned _identifier;
	NSString* _modelIdentifier;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (readonly) CDSession * session;                     //@synthesize session=_session - In the implementation block
-(char)isEqualToDevice:(id)arg1 ;
-(NSString *)modelIdentifier;
-(id)readSystemDataWithError:(id*)arg1 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(char)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(char)requestSystemDataWithError:(id*)arg1 ;
-(char)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(char)requestLogDataWithError:(id*)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)identifier;
-(CDSession *)session;
@end

