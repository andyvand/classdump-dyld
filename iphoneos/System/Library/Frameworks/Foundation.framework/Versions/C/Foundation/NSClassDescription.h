/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface NSClassDescription : NSObject

@property (copy,readonly) NSArray * attributeKeys; 
@property (copy,readonly) NSArray * toOneRelationshipKeys; 
@property (copy,readonly) NSArray * toManyRelationshipKeys; 
+(void)invalidateClassDescriptionCache;
+(id)classDelegate;
+(void)setClassDelegate:(id)arg1 ;
+(id)classDescriptionForClass:(Class)arg1 ;
+(void)registerClassDescription:(id)arg1 forClass:(Class)arg2 ;
-(NSArray *)attributeKeys;
-(NSArray *)toOneRelationshipKeys;
-(NSArray *)toManyRelationshipKeys;
-(id)inverseForRelationshipKey:(id)arg1 ;
-(id)classDescriptionForDestinationKey:(id)arg1 ;
-(id)classDescriptionForKeyPath:(id)arg1 ;
-(id)allAttributeKeys;
-(id)allToManyRelationshipKeys;
-(id)allToOneRelationshipKeys;
-(id)classPropertyKeys;
-(id)displayNameForKey:(id)arg1 ;
-(char)ownsDestinationObjectsForRelationshipKey:(id)arg1 ;
-(id)validateValue:(id*)arg1 forKey:(id)arg2 ;
-(id)entityName;
@end

