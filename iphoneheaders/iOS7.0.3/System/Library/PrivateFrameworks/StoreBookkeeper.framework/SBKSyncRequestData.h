/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SBKSyncTransaction;

@interface SBKSyncRequestData : NSObject {

	SBKSyncTransaction* _transaction;

}

@property (readonly) SBKSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)serializablePropertyListPayloadWithTransaction:(id)arg1 ;
-(id)transaction;
-(id)initWithTransaction:(id)arg1 ;
-(id)serializableRequestBodyPropertyList;
-(id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableConflictDetectionValue;
-(BOOL)_needsConflictDetection;
-(id)_serializableConflictDetectionOrdinalForKey:(id)arg1 ;
-(void).cxx_destruct;
@end
