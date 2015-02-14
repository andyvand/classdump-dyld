/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface ISDPropertyConflict : NSObject {

	NSArray* _propertyNames;
	NSString* _winningClientId;
	NSDictionary* _userValues;
	NSMutableDictionary* _propertyChangesPerClientId;
	NSString* _recordId;
	char _modified;

}
-(char)isResolved;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(char)isModified;
-(id)propertyNames;
-(id)initWithPropertyNames:(id)arg1 recordId:(id)arg2 ;
-(void)addPropertyChanges:(id)arg1 fromClientId:(id)arg2 ;
-(void)clearModified;
-(id)clientIds;
-(char)propertyChangesAreDefaultValues;
-(id)winningClientId;
-(void)setWinningClientWithId:(id)arg1 ;
-(id)winningPropertyChanges;
-(id)relationshipChangeReferencesRecordIdsInMap:(id)arg1 updateTupleReferences:(char)arg2 ;
-(char)_propertyChanges:(id)arg1 areEqualTo:(id)arg2 ;
-(void)setUserValues:(id)arg1 ;
-(id)propertyChangeFromClientWithId:(id)arg1 ;
-(void)setModified;
-(id)winningValueForProperty:(id)arg1 ;
@end

