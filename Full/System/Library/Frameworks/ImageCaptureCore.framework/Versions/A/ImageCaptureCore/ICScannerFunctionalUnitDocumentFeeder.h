/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICScannerFunctionalUnit.h>

@class NSIndexSet;

@interface ICScannerFunctionalUnitDocumentFeeder : ICScannerFunctionalUnit {

	id _dfProps;

}

@property (readonly) NSIndexSet * supportedDocumentTypes; 
@property (assign) unsigned long long documentType; 
@property (readonly) CGSize documentSize; 
@property (readonly) char supportsDuplexScanning; 
@property (assign) char duplexScanningEnabled; 
@property (assign) char documentLoaded; 
@property (assign) unsigned long long oddPageOrientation; 
@property (assign) unsigned long long evenPageOrientation; 
@property (readonly) char reverseFeederPageOrder; 
@property (readonly) unsigned long long justification; 
@property (readonly) char canDetectDocument; 
-(id)colorSyncProfilePath;
-(id)initWithDictionary:(id)arg1 andScanner:(id)arg2 ;
-(id)currentSettings;
-(void)setDuplexSupportLevel:(id)arg1 ;
-(char)canDetectDocument;
-(unsigned long long)justification;
-(char)documentLoaded;
-(void)setDocumentLoaded:(char)arg1 ;
-(void)setDuplexScanningEnabled:(char)arg1 ;
-(void)setOddPageOrientation:(unsigned long long)arg1 ;
-(void)setEvenPageOrientation:(unsigned long long)arg1 ;
-(char)reverseFeederPageOrder;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(char)duplexScanningEnabled;
-(unsigned long long)oddPageOrientation;
-(unsigned long long)evenPageOrientation;
-(NSIndexSet *)supportedDocumentTypes;
-(char)supportsDuplexScanning;
-(CGSize)documentSize;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

