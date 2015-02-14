/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSString;

@interface PASymbolSourceInfo : NSObject <PASerializable> {

	unsigned long long _offsetIntoSymbolOwner;
	unsigned long long _length;
	NSString* _fileName;
	unsigned _lineNumber;
	unsigned _columnNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * sourceFileName;                             //@synthesize fileName=_fileName - In the implementation block
@property (readonly) unsigned sourceFileLineNumber;                         //@synthesize lineNumber=_lineNumber - In the implementation block
@property (readonly) unsigned sourceFileColumnNumber;                       //@synthesize columnNumber=_columnNumber - In the implementation block
@property (readonly) unsigned long long offsetIntoSymbolOwner;              //@synthesize offsetIntoSymbolOwner=_offsetIntoSymbolOwner - In the implementation block
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)offsetIntoSymbolOwner;
-(id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(char)isEmptySourceInfo;
-(id)initWithCSSymbolOwner:(CSTypeRef)arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2 ;
-(NSString *)sourceFileName;
-(unsigned)sourceFileLineNumber;
-(unsigned)sourceFileColumnNumber;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedSymbolSourceInfo:(const SCD_Struct_PA12*)arg1 ;
-(void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(unsigned long long)length;
@end

