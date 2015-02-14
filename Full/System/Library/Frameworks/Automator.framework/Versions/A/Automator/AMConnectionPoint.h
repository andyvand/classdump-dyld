/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/NSCopying.h>

@class AMActionConnector, NSString, AMAction, NSPredicate, NSDictionary;

@interface AMConnectionPoint : NSObject <NSCopying> {

	AMActionConnector* _connector;
	AMActionConnector* _runtimeConnector;
	NSString* _typeDisplayName;
	NSString* _utiType;
	AMAction* _action;
	NSPredicate* _predicate;
	NSDictionary* _runtimeTypeDictionary;
	char _isInputPoint;

}
+(id)inputConnectionPointWithAction:(id)arg1 ;
+(id)outputConnectionPointWithAction:(id)arg1 ;
-(void)generateUTITypes;
-(void)resetToDefault;
-(void)resetToDefaultOnMainThread;
-(id)connector;
-(id)typeDictionary;
-(void)setRuntimeTypeDictionary:(id)arg1 ;
-(void)setRuntimeConnector:(id)arg1 ;
-(id)runtimeConnector;
-(void)setConnector:(id)arg1 ;
-(id)initWithAction:(id)arg1 isInput:(char)arg2 ;
-(id)typeDisplayName;
-(void)setTypeDisplayName:(id)arg1 ;
-(id)runtimeTypeDictionary;
-(id)UUID;
-(id)UTIType;
-(void)setUTIType:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)action;
-(char)isValid;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
@end

