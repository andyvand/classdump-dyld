/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class NSString, NSSet;

@interface AVMediaFileType : NSObject <NSCopying> {

	NSString* _uti;
	long long _supportsSampleReferencesOnce;
	char _supportsSampleReferences;

}

@property (nonatomic,readonly) NSString * defaultFileExtension; 
@property (nonatomic,readonly) NSSet * supportedMediaTypes; 
@property (nonatomic,readonly) char supportsSampleReferences; 
@property (nonatomic,readonly) NSString * UTI; 
@property (nonatomic,readonly) NSString * figFormatReaderFileFormat; 
@property (nonatomic,readonly) unsigned audioFileTypeID; 
+(id)allFileTypeIdentifiers;
+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg1 ;
+(id)isoFileTypes;
+(void)initialize;
-(char)supportsSampleReferences;
-(NSString *)figFormatReaderFileFormat;
-(NSSet *)supportedMediaTypes;
-(char)supportsFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(char)supportsOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(unsigned)audioFileTypeID;
-(id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSString *)defaultFileExtension;
-(NSString *)UTI;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

