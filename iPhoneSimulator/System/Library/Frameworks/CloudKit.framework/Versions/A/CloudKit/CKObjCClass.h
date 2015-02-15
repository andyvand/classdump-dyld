/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {

	Class _handle;
	NSString* _name;
	NSDictionary* _propertiesByName;
	NSArray* _sortedProperties;

}

@property (nonatomic,readonly) Class handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertiesByName;              //@synthesize propertiesByName=_propertiesByName - In the implementation block
@property (nonatomic,readonly) NSArray * sortedProperties;                   //@synthesize sortedProperties=_sortedProperties - In the implementation block
+(id)classForHandle:(Class)arg1 ;
+(id)classForObject:(id)arg1 ;
-(NSArray *)sortedProperties;
-(Class)handle;
-(id)initWithHandle:(Class)arg1 ;
-(NSString *)name;
-(id)propertyForName:(id)arg1 ;
-(id)allProperties;
-(NSDictionary *)propertiesByName;
@end

