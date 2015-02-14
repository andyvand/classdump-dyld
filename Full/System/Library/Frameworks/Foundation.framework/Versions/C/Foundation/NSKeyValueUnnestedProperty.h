/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSArray;

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {

	NSArray* _affectingProperties;
	char _cachedIsaForAutonotifyingIsValid;
	Class _cachedIsaForAutonotifying;

}
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(char)arg3 ;
-(Class)isaForAutonotifying;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(char)arg3 ;
-(char)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(char)arg4 forwardingValues:(SCD_Struct_NS56)arg5 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char*)arg2 ;
-(char)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(char)arg4 forwardingValues:(SCD_Struct_NS56*)arg5 ;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char*)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
-(void)dealloc;
-(id)description;
@end

