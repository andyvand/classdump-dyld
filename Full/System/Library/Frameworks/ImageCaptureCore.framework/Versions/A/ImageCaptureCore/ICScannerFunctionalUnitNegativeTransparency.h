/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICScannerFunctionalUnit.h>

@class NSIndexSet;

@interface ICScannerFunctionalUnitNegativeTransparency : ICScannerFunctionalUnit {

	id _ntrProps;

}

@property (readonly) NSIndexSet * supportedDocumentTypes; 
@property (assign) unsigned long long documentType; 
@property (readonly) CGSize documentSize; 
-(id)colorSyncProfilePath;
-(id)initWithDictionary:(id)arg1 andScanner:(id)arg2 ;
-(id)currentSettings;
-(id)colorSyncModeForGrayOverview;
-(id)colorSyncModeForRGBOverview;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(NSIndexSet *)supportedDocumentTypes;
-(CGSize)documentSize;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

