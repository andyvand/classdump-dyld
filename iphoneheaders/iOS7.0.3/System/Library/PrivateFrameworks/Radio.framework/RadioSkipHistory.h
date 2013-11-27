/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObjectContext, NSManagedObject, NSString, NSArray;

@interface RadioSkipHistory : NSObject <RadioManagedObjectWrapperProtocol> {

	NSManagedObjectContext* _context;
	NSManagedObject* _managedObject;

}

@property (nonatomic,copy) NSString * skipIdentifier; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (nonatomic,readonly) NSManagedObject * managedObject;               //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
-(long long)stationID;
-(id)stationHash;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)context;
-(id)managedObject;
-(void)setSkipIdentifier:(id)arg1 ;
-(void)setSkipTimestamps:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStationHash:(id)arg1 ;
-(id)skipIdentifier;
-(id)skipTimestamps;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 context:(id)arg2 ;
-(void).cxx_destruct;
@end
