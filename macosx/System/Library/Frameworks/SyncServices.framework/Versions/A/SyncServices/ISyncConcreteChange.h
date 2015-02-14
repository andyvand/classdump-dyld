/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISyncChange.h>

@class NSString, NSDictionary, NSArray, ISDChange;

@interface ISyncConcreteChange : ISyncChange {

	int _type;
	NSString* _recordId;
	NSDictionary* _record;
	NSArray* _changes;
	int _clientNumber;
	ISDChange* _minglerChange;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(id)arg1 ;
-(int)type;
-(id)changes;
-(id)record;
-(id)_clientId;
-(id)_entityName;
-(id)recordIdentifier;
-(void)setRecordIdentifier:(id)arg1 ;
-(id)initWithChangeType:(int)arg1 recordIdentifier:(id)arg2 changes:(id)arg3 ;
-(void)_setRecord:(id)arg1 ;
-(id)_minglerChange;
-(id)_propertyChangeForName:(id)arg1 ;
-(int)clientNumber;
-(void)_setClientId:(id)arg1 ;
-(id)_propertyChangeNames;
-(void)setMinglerChange:(id)arg1 ;
@end

