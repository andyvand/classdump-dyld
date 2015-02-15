/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:31:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/SystemConfiguration/PrinterNotifications.bundle/Contents/MacOS/PrinterNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, SupportedFeatureList;

@interface InputSourceCapabilities : NSObject {

	unsigned long long _MinWidth;
	unsigned long long _MaxWidth;
	unsigned long long _MinHeight;
	unsigned long long _MaxHeight;
	unsigned long long _MaxPhysicalWidth;
	unsigned long long _MaxPhysicalHeight;
	unsigned long long _MaxScanRegions;
	unsigned long long _MaxXOpticalResolution;
	unsigned long long _MaxYOpticalResolution;
	unsigned long long _RiskyTopMargin;
	unsigned long long _RiskyLeftMargin;
	unsigned long long _RiskyRightMargin;
	unsigned long long _RiskyBottomMargin;
	NSArray* _SettingProfiles;
	SupportedFeatureList* _SupportedIntents;
	NSArray* _AutoDetectionEdges;

}

@property (assign,nonatomic) unsigned long long MinWidth;                                                 //@synthesize MinWidth=_MinWidth - In the implementation block
@property (assign,nonatomic) unsigned long long MaxWidth;                                                 //@synthesize MaxWidth=_MaxWidth - In the implementation block
@property (assign,nonatomic) unsigned long long MinHeight;                                                //@synthesize MinHeight=_MinHeight - In the implementation block
@property (assign,nonatomic) unsigned long long MaxHeight;                                                //@synthesize MaxHeight=_MaxHeight - In the implementation block
@property (assign,nonatomic) unsigned long long MaxPhysicalWidth;                                         //@synthesize MaxPhysicalWidth=_MaxPhysicalWidth - In the implementation block
@property (assign,nonatomic) unsigned long long MaxPhysicalHeight;                                        //@synthesize MaxPhysicalHeight=_MaxPhysicalHeight - In the implementation block
@property (assign,nonatomic) unsigned long long MaxScanRegions;                                           //@synthesize MaxScanRegions=_MaxScanRegions - In the implementation block
@property (assign,nonatomic) unsigned long long MaxXOpticalResolution;                                    //@synthesize MaxXOpticalResolution=_MaxXOpticalResolution - In the implementation block
@property (assign,nonatomic) unsigned long long MaxYOpticalResolution;                                    //@synthesize MaxYOpticalResolution=_MaxYOpticalResolution - In the implementation block
@property (assign,nonatomic) unsigned long long RiskyTopMargin;                                           //@synthesize RiskyTopMargin=_RiskyTopMargin - In the implementation block
@property (assign,nonatomic) unsigned long long RiskyLeftMargin;                                          //@synthesize RiskyLeftMargin=_RiskyLeftMargin - In the implementation block
@property (assign,nonatomic) unsigned long long RiskyRightMargin;                                         //@synthesize RiskyRightMargin=_RiskyRightMargin - In the implementation block
@property (assign,nonatomic) unsigned long long RiskyBottomMargin;                                        //@synthesize RiskyBottomMargin=_RiskyBottomMargin - In the implementation block
@property (setter=ettingProfiles,nonatomic,retain) NSArray * SettingProfiles;                             //@synthesize SettingProfiles=_SettingProfiles - In the implementation block
@property (setter=upportedIntents,nonatomic,retain) SupportedFeatureList * SupportedIntents;              //@synthesize SupportedIntents=_SupportedIntents - In the implementation block
@property (nonatomic,retain) NSArray * AutoDetectionEdges;                                                //@synthesize AutoDetectionEdges=_AutoDetectionEdges - In the implementation block
-(void)setMaxScanRegions:(unsigned long long)arg1 ;
-(char)supportsPaperWidth:(double)arg1 height:(double)arg2 ;
-(void)setMaxPhysicalHeight:(unsigned long long)arg1 ;
-(void)setMaxPhysicalWidth:(unsigned long long)arg1 ;
-(id)preferredOutputUTI;
-(void)setRiskyTopMargin:(unsigned long long)arg1 ;
-(void)setRiskyLeftMargin:(unsigned long long)arg1 ;
-(void)setRiskyRightMargin:(unsigned long long)arg1 ;
-(id)maximumResolution;
-(void)setRiskyBottomMargin:(unsigned long long)arg1 ;
-(char)supportsUTI:(id)arg1 ;
-(unsigned long long)RiskyLeftMargin;
-(unsigned long long)MaxScanRegions;
-(char)supportsGrayscale;
-(id)supportedDocumentFormats;
-(char)supportsData;
-(char)supportsPDF;
-(unsigned long long)MaxHeight;
-(NSArray *)SettingProfiles;
-(char)supportsResolution:(id)arg1 ;
-(unsigned long long)MinHeight;
-(id)supportedUTIs;
-(unsigned long long)MaxYOpticalResolution;
-(unsigned long long)RiskyRightMargin;
-(unsigned long long)RiskyTopMargin;
-(char)supportsJPEG;
-(unsigned long long)MaxWidth;
-(char)supportsColor;
-(unsigned long long)MinWidth;
-(void)updateMaxResolutions;
-(unsigned long long)RiskyBottomMargin;
-(SupportedFeatureList *)SupportedIntents;
-(void)setMaxXOpticalResolution:(unsigned long long)arg1 ;
-(void)setMaxYOpticalResolution:(unsigned long long)arg1 ;
-(NSArray *)AutoDetectionEdges;
-(char)supportsColorMode:(id)arg1 ;
-(void)setSettingProfiles:(NSArray *)arg1 ;
-(id)TXTRecordColorSpaces;
-(void)setSupportedIntents:(SupportedFeatureList *)arg1 ;
-(unsigned long long)MaxPhysicalHeight;
-(unsigned long long)MaxXOpticalResolution;
-(char)supportsBinary;
-(id)initWithXML:(id)arg1 ;
-(void)setAutoDetectionEdges:(NSArray *)arg1 ;
-(unsigned long long)MaxPhysicalWidth;
-(void)setMinHeight:(unsigned long long)arg1 ;
-(void)setMaxHeight:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMinWidth:(unsigned long long)arg1 ;
-(void)setMaxWidth:(unsigned long long)arg1 ;
@end
