/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary, ISyncConcreteSession;

@interface RelationshipInformation : NSObject {

	NSString* _entityName;
	NSString* _relationship;
	NSArray* _legalTypes;
	NSMutableDictionary* _typeMap;
	ISyncConcreteSession* _session;
	NSMutableDictionary* _modsToCheckPerRecord;

}
-(void)dealloc;
-(id)initWithName:(id)arg1 forEntity:(id)arg2 inSession:(id)arg3 ;
-(void)setReferencesToCheck:(id)arg1 forRecord:(id)arg2 ;
-(id)_relationshipName;
-(id)_entityName;
-(id)_referencesToCheck;
-(void)validateReferences:(id)arg1 ;
-(id)allUnknownReferences;
@end

