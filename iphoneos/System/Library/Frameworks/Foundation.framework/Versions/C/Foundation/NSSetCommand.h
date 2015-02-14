/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScriptCommand.h>

@class NSScriptObjectSpecifier;

@interface NSSetCommand : NSScriptCommand {

	NSScriptObjectSpecifier* _keySpecifier;

}

@property (retain,readonly) NSScriptObjectSpecifier * keySpecifier; 
+(char)_getArguments:(id)arg1 withParameters:(SCD_Struct_NS15)arg2 ;
-(id)performDefaultImplementation;
-(void)setReceiversSpecifier:(id)arg1 ;
-(NSScriptObjectSpecifier *)keySpecifier;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

