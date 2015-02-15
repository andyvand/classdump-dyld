/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFMessageStore.h>

@class NSData, NSString;

@interface MFBerkeleyMbox : MFMessageStore {

	NSData* _mboxData;
	NSString* _path;

}

@property (copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(char)storeExistsForPath:(id)arg1 ;
+(char)storeAtPathIsWritable:(id)arg1 ;
+(char)createEmptyStoreForPath:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 readOnly:(char)arg2 createEmptyStore:(char)arg3 ;
-(void)_resetAllMessages;
-(id)_mboxData;
-(id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 allowPartial:(char)arg4 ;
-(void)doCompact;
-(id)initWithPath:(id)arg1 create:(char)arg2 readOnly:(char)arg3 account:(id)arg4 ;
-(void)writeUpdatedMessageDataToDisk;
-(id)_lockFilePath;
-(id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 ;
-(id)_defaultRouterDestination;
-(void)fetchSynchronously;
-(id)init;
-(NSString *)path;
@end
