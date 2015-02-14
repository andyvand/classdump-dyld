/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty {

	NSString* _relationshipKey;
	NSString* _keyPathFromRelatedObject;
	NSKeyValueUnnestedProperty* _relationshipProperty;
	NSString* _keyPathWithoutOperatorComponents;
	char _isAllowedToResultInForwarding;
	id _dependentValueKeyOrKeys;
	char _dependentValueKeyOrKeysIsASet;

}
-(id)dependentValueKeyOrKeysIsASet:(char*)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(char)arg3 ;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(char)arg3 ;
-(char)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(char)arg4 forwardingValues:(SCD_Struct_NS56)arg5 ;
-(char)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(char)arg4 forwardingValues:(SCD_Struct_NS56*)arg5 ;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char*)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned long long)arg3 propertiesBeingInitialized:(CFSetRef)arg4 ;
-(void)dealloc;
-(id)description;
@end

