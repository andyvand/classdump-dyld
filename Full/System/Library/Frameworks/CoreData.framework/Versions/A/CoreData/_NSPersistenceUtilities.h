/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSPersistenceUtilities : NSObject
+(unsigned long long)attributeTypeForXMLInfo:(id)arg1 ;
+(id)_createAttributeDescriptionForNode:(id)arg1 ;
+(id)_createRelationshipDescriptionForNode:(id)arg1 ;
+(void)_populateEntityDescription:(id)arg1 fromNode:(id)arg2 ;
+(void)_pickUpMissingStuffFromNode:(id)arg1 forEntity:(id)arg2 ;
+(char)_proceedGivenDBInfo:(id)arg1 ;
+(void)_mapNode:(id)arg1 toEntityInModel:(id)arg2 ;
+(id)reverseEngineerModelFromXMLDataAt:(id)arg1 ;
+(void)initialize;
+(char)_setURL:(id)arg1 forPersistentStore:(id)arg2 withCoordinator:(id)arg3 ;
@end

