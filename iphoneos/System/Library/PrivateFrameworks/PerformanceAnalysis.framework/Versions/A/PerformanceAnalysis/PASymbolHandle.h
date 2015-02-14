/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASerializable.h>

@class PASymbol, PASymbolOwner, NSString, NSUUID;

@interface PASymbolHandle : NSObject <PASerializable> {

	PASymbol* _symbol;
	PASymbolOwner* _owner;
	unsigned long long _symbolOwnerStartAddressInTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char hasSymbolOwner; 
@property (readonly) NSUUID * symbolOwnerUUID; 
@property (readonly) unsigned long long symbolOwnerStartAddressInTask;              //@synthesize symbolOwnerStartAddressInTask=_symbolOwnerStartAddressInTask - In the implementation block
@property (readonly) NSString * symbolOwnerName; 
@property (readonly) NSString * symbolOwnerPath; 
@property (readonly) unsigned long long symbolOwnerTextSegmentLength; 
@property (readonly) NSString * symbolOwnerBundleIdentifier; 
@property (readonly) NSString * symbolOwnerBundleVersion; 
@property (readonly) NSString * symbolOwnerBundleShortVersion; 
@property (readonly) NSString * symbolOwnerBinaryVersion; 
@property (readonly) char hasSymbol; 
@property (readonly) NSString * symbolName; 
@property (readonly) unsigned long long symbolStartAddressInTask; 
@property (readonly) unsigned long long symbolLength; 
+(id)getEmptySymbolHandle;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(id)_initAsEmptyHandle;
-(unsigned long long)symbolStartAddressInTask;
-(unsigned long long)symbolLength;
-(id)_sourceInformationForAddress:(unsigned long long)arg1 ;
-(char)hasSourceInformationForAddress:(unsigned long long)arg1 ;
-(id)debugDescriptionForAddress:(unsigned long long)arg1 ;
-(unsigned long long)symbolOwnerStartAddressInTask;
-(NSString *)symbolName;
-(NSString *)symbolOwnerName;
-(NSUUID *)symbolOwnerUUID;
-(id)sourceFileNameForAddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForAddress:(unsigned long long)arg1 ;
-(unsigned)sourceColumnNumberForAddress:(unsigned long long)arg1 ;
-(char)hasSymbolOwner;
-(NSString *)symbolOwnerPath;
-(unsigned long long)symbolOwnerTextSegmentLength;
-(NSString *)symbolOwnerBundleIdentifier;
-(NSString *)symbolOwnerBundleVersion;
-(NSString *)symbolOwnerBundleShortVersion;
-(NSString *)symbolOwnerBinaryVersion;
-(char)hasSymbol;
-(long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3 ;
-(char)addToPersistentCache;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)dealloc;
-(NSString *)debugDescription;
@end

