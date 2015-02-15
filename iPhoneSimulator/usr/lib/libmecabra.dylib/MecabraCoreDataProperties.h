/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface MecabraCoreDataProperties : NSObject {

	NSMutableDictionary* _descriptionDictionary;
	NSString* _identifier;
	NSString* _type;

}

@property (nonatomic,retain,readonly) NSString * type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * ubiquityContainerIdentifier; 
@property (nonatomic,retain) NSMutableDictionary * descriptionDictionary;              //@synthesize descriptionDictionary=_descriptionDictionary - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
+(id)sharedInstanceForType:(id)arg1 ;
+(void)setDefaultDescriptionPath:(id)arg1 ;
+(id)defaultDescriptionPath;
+(id)ubiquityContainerURL;
-(id)uniqueKeys;
-(void)forceNoSync;
-(id)requiredKeys;
-(id)entityModelName;
-(char)databaseSyncs;
-(id)entityDescriptionURL;
-(NSString *)ubiquityContainerIdentifier;
-(id)ubiquitousURLWithSuffix:(id)arg1 ;
-(id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1 ;
-(id)ubiquitousTransactionURLForIdentifier:(id)arg1 ;
-(void)setDescriptionDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)descriptionDictionary;
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)type;
-(id)sortDescriptors;
-(id)initWithIdentifier:(id)arg1 ;
@end

