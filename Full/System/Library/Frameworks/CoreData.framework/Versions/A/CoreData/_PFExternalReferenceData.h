/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface _PFExternalReferenceData : NSData {

	NSData* _originalData;
	void* _bytesPtrForStore;
	unsigned long long _bytesLengthForStore;
	void* _bytesPtrForExternalReference;
	unsigned long long _bytesLengthForExternalReference;
	NSString* _externalReferenceLocation;
	NSString* _safeguardLocation;
	id _ubiquitousLocation;
	struct {
		unsigned _isStoredExternally : 1;
		unsigned _hasMappedData : 1;
		unsigned _cleanupOnDealloc : 1;
		unsigned _dataProtectionLevel : 3;
		unsigned _isStoredUbiquitously : 1;
		unsigned _createdByUbiquityImport : 1;
		unsigned _reserved : 24;
	}  _externalDataFlags;

}
+(char)_updateFileDescriptorsInUseReserveNew:(char)arg1 ;
+(char)_releaseReservedMapFileDescriptor;
+(char)_reserveMapFileDescriptor;
-(id)UUID;
-(char)hasExternalReferenceContent;
-(const char*)_externalReferenceLocation;
-(id)_originalData;
-(const char*)_safeguardLocation;
-(unsigned long long)_bytesLengthForExternalReference;
-(void)doCleanupOnDealloc;
-(id)_safeguardLocationString;
-(id)externalReferenceLocationString;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6 ;
-(char)_createdByUbiquityImport;
-(id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(id)databaseValue;
-(const void*)_bytesPtrForStore;
-(unsigned long long)_bytesLengthForStore;
-(id)constructSafeguardStringFromString:(id)arg1 ;
-(void)_doCleanup;
-(const void*)_bytesPtrForExternalReference;
-(char)_attemptToMapData:(id*)arg1 ;
-(id)_exceptionForReadError:(id)arg1 ;
-(const void*)_retrieveExternalData;
-(char)_isEqualHelper:(id)arg1 ;
-(id)initForUbiquityDictionary:(id)arg1 store:(id)arg2 ;
-(void)_setBytesForExternalReference:(const void*)arg1 ;
-(id)_externalReferenceLocationString;
-(int)preferredProtectionLevel;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(char)isEqual:(id)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(char)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)filename;
-(Class)classForCoder;
-(Class)classForArchiver;
@end

