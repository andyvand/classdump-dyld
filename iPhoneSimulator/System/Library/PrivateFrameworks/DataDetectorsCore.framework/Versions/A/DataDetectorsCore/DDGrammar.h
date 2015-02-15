/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/NSCoding.h>

@class NSMutableArray, NSMutableSet, DDNonTerminal, NSArray, NSMutableDictionary;

@interface DDGrammar : NSObject <NSCoding> {

	NSMutableArray* _nonTerminals;
	NSMutableSet* _allNames;
	int _tokenGen;
	DDNonTerminal* _start;
	NSArray* _allProductionsCache;
	long long _nextNonTerminalId;
	CFDictionaryRef _terminalById;
	NSMutableDictionary* _nonTerminalByVariable;
	DDProtoLexemeCollectionRef _plCollection;

}
-(id)freshNameWithBase:(id)arg1 ;
-(id)buildNonTerminalSymbolWithName:(id)arg1 ;
-(id)terminalSymbolWithTokenId:(long long)arg1 name:(id)arg2 ;
-(id)buildNonTerminalSymbol;
-(id)allProductions;
-(long long)nextNonTerminalIdentifier;
-(id)terminalSymbolWithLookupTokenId:(long long)arg1 name:(id)arg2 ;
-(void)feedWithTopLevelExpressions:(id)arg1 plCollection:(DDProtoLexemeCollectionRef)arg2 manager:(id)arg3 ;
-(id)grammarAsString;
-(DDProtoLexemeCollectionRef)plCollection;
-(id)nonTerminalSymbolForVariable:(id)arg1 ;
-(void)setNonTerminalSymbol:(id)arg1 forVariable:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)start;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)locationString;
@end

