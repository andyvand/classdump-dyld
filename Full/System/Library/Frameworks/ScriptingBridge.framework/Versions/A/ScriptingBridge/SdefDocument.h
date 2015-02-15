/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScriptingBridge/ScriptingBridge-Structs.h>
@class NSXMLElement, NSString, NSMutableDictionary, NSArray;

@interface SdefDocument : NSObject {

	NSXMLElement* _sdef_root;
	NSString* _basename;
	NSMutableDictionary* _type_dictionary;
	NSArray* _classes;
	NSArray* _records;
	NSArray* _commands;
	NSArray* _enumerations;

}
+(id)intrinsic_types;
-(id)objcName:(id)arg1 type:(int)arg2 ;
-(id)elementForTypeName:(id)arg1 ;
-(typeinfo_t)typeInfoForType:(id)arg1 ;
-(id)initWithSdef:(id)arg1 basename:(id)arg2 ;
-(id)classes;
-(id)records;
-(id)objcName:(id)arg1 ;
-(typeinfo_t)typeInfoForElement:(id)arg1 ;
-(id)enumerations;
-(void)dealloc;
-(id)commands;
@end

