/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/NSCoding.h>

@class DDGrammar, NSDictionary;

@interface DDCompilerState : NSObject <NSCoding> {

	DDGrammar* _grammar;
	const CFArrayRef _states;
	_DDDotedProduction* _dotedProduction;
	long long _numberOfDotedProduction;
	DDProtoLexemeCollectionRef _plCollection;
	NSDictionary* _ExternalTerminalToInternalTerminal;
	NSDictionary* _InternalTerminalToTerminalExternal;
	NSDictionary* _ExternalNonTerminalToInternalNonTerminal;
	NSDictionary* _InternalNonTerminalToTerminalNonExternal;

}

@property (readonly) DDGrammar * grammar;              //@synthesize grammar=_grammar - In the implementation block
-(id)initWithGrammar:(id)arg1 states:(CFArrayRef)arg2 dotedProduction:(_DDDotedProduction*)arg3 numberOfDotedProduction:(long long)arg4 ;
-(void)setPlCollection:(DDProtoLexemeCollectionRef)arg1 ;
-(CFStringRef)copyItemSetDescriptionForStateWithIndex:(long long)arg1 ;
-(id)copyItemSetForStateIndex:(long long)arg1 ;
-(long long)_resolveInternalTerminalID:(long long)arg1 ;
-(DDGrammar *)grammar;
-(CFStringRef)_copyDescriptionOfInternalToken:(long long)arg1 ;
-(long long)_resolveInternalNonTerminalID:(long long)arg1 ;
-(void)setTerminalPermutation:(_DDPermutation*)arg1 ;
-(void)setNonTerminalPermutation:(_DDPermutation*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

