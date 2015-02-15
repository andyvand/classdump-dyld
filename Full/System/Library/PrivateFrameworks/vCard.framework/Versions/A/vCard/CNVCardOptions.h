/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface CNVCardOptions : NSObject {

	char _includeNotes;
	char _includePhotos;
	char _includePrivateFields;
	char _includeUserSettings;
	char _compressPhotos;
	char _prefersUncroppedPhotos;
	char _usePhotoReferencesIfAvailable;
	unsigned long long _maximumEncodingLength;
	unsigned long long _maximumImageEncodingLength;
	NSArray* _treatAsUnknownProperties;
	unsigned long long _outputFormat;
	NSArray* _availableEncodings;

}

@property (assign) char includePrivateFields;                                  //@synthesize includePrivateFields=_includePrivateFields - In the implementation block
@property (assign) char includeNotes;                                          //@synthesize includeNotes=_includeNotes - In the implementation block
@property (assign) char includeUserSettings;                                   //@synthesize includeUserSettings=_includeUserSettings - In the implementation block
@property (assign) char includePhotos;                                         //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign) char compressPhotos;                                        //@synthesize compressPhotos=_compressPhotos - In the implementation block
@property (assign) char prefersUncroppedPhotos;                                //@synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos - In the implementation block
@property (assign) char usePhotoReferencesIfAvailable;                         //@synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable - In the implementation block
@property (assign) unsigned long long maximumEncodingLength;                   //@synthesize maximumEncodingLength=_maximumEncodingLength - In the implementation block
@property (assign) unsigned long long maximumImageEncodingLength;              //@synthesize maximumImageEncodingLength=_maximumImageEncodingLength - In the implementation block
@property (copy) NSArray * treatAsUnknownProperties;                           //@synthesize treatAsUnknownProperties=_treatAsUnknownProperties - In the implementation block
@property (assign) unsigned long long outputFormat;                            //@synthesize outputFormat=_outputFormat - In the implementation block
@property (copy) NSArray * availableEncodings;                                 //@synthesize availableEncodings=_availableEncodings - In the implementation block
+(id)defaultOptions;
+(id)optionsFromPreferences;
-(void)setIncludeNotes:(char)arg1 ;
-(void)setIncludePhotos:(char)arg1 ;
-(char)includeUserSettings;
-(void)setIncludeUserSettings:(char)arg1 ;
-(void)setAvailableEncodings:(NSArray *)arg1 ;
-(char)includePrivateFields;
-(void)setIncludePrivateFields:(char)arg1 ;
-(char)includeNotes;
-(char)includePhotos;
-(char)compressPhotos;
-(void)setCompressPhotos:(char)arg1 ;
-(char)prefersUncroppedPhotos;
-(void)setPrefersUncroppedPhotos:(char)arg1 ;
-(char)usePhotoReferencesIfAvailable;
-(void)setUsePhotoReferencesIfAvailable:(char)arg1 ;
-(unsigned long long)maximumEncodingLength;
-(void)setMaximumEncodingLength:(unsigned long long)arg1 ;
-(unsigned long long)maximumImageEncodingLength;
-(void)setMaximumImageEncodingLength:(unsigned long long)arg1 ;
-(NSArray *)treatAsUnknownProperties;
-(void)setTreatAsUnknownProperties:(NSArray *)arg1 ;
-(NSArray *)availableEncodings;
-(unsigned long long)outputFormat;
-(void)setOutputFormat:(unsigned long long)arg1 ;
@end

