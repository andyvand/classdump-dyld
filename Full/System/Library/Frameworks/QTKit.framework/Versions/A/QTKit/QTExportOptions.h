/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/NSMutableCopying.h>
#import <QTKit/NSCopying.h>

@class QTExportOptionsInternal, NSString;

@interface QTExportOptions : NSObject <NSMutableCopying, NSCopying> {

	QTExportOptionsInternal* _internal;

}

@property (nonatomic,retain) NSString * exportOptionsIdentifier; 
@property (readonly) OpaqueRFExportRef exportRef; 
+(id)templateNameForIdentifier:(id)arg1 ;
+(id)presetNameForIdentifier:(id)arg1 ;
+(id)allExportOptionsIdentifiers;
+(id)exportOptionsIdentifiersCompatibleWithMovie:(id)arg1 ;
+(id)localizedNameForExportOptionsIdentifier:(id)arg1 ;
+(id)exportOptionsWithIdentifier:(id)arg1 ;
-(char)validateSourceForExportIdentifier:(id*)arg1 ;
-(OpaqueRFExportRef)exportRef;
-(id)recommendedFileTypesForExportedFile;
-(id)initWithIdentifier:(id)arg1 exportRef:(OpaqueRFExportRef)arg2 ;
-(NSString *)exportOptionsIdentifier;
-(void)setExportOptionsIdentifier:(NSString *)arg1 ;
-(id)localizedExportOptionsSummary;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

