+[TranscriptStylePluginRegistry sharedRegistry]
-[TranscriptStylePluginRegistry init]
-[TranscriptStylePluginLoader init]
-[TranscriptStylePluginRegistry menuItems]
-[TranscriptStylePluginRegistry plugins]
-[TranscriptStylePluginLoader identifiers]
-[TranscriptStylePluginLoader pluginWithIdentifier:]
+[NSFileManager(UserFolders) userDownloadsFolder]
+[TranscriptImageResourceProtocol shouldRegisterProtocol:]
+[Presentity initialize]
-[Presentity sendNotificationABPersonChanged]
-[Presentity forgetCustomPicture]
-[FileTransfer _updateWithDictionaryRepresentation:]
-[FileTransfer accountID]
+[BuddyPicture buddyPictureWithData:]
+[BuddyPicture buddyPictureWithData:key:]
+[BuddyPicture buddyPictureStore]
-[BuddyPicture initWithData:key:]
-[BuddyPicture init]
-[BuddyPicture _registerForPreferenceChanges]
-[BuddyPicture key]
+[BuddyPicture rememberBuddyPicture:withKey:]
+[BuddyPicture setMyPicture:]
-[BuddyPicture dataWithMaxSize:minSize:maxDataSize:allowAnimated:]
-[BuddyPicture image]
-[BuddyPicture _cacheImage]
-[NSDataRetainingImage initWithData:]
-[NSDataRetainingImage setOriginalData:]
-[BuddyPicture animatedRepresentation]
-[NSImage(IMRenderingUtilities) imageIsWithinMaxSize:andMinSize:]
-[NSDataRetainingImage originalData]
-[NSData(ImageTypeChecking) isGIF]
-[NSData(ImageTypeChecking) imageFileExtension]
-[NSImage(IMRenderingUtilities) GIFDataFromRepWithMaxSize:maxLength:minSize:]
-[NSImage(IMRenderingUtilities) rawGIFData]
-[NSImageRep(GIFDetectionAdditions) hasExpectedGIFAttributes]
-[NSDataRetainingImage imageWithMaxSize:]
-[NSImage(IMRenderingUtilities) imageWithMaxSize:]
-[NSImage(IMRenderingUtilities) largestRepSize]
-[NSBitmapImageRep(RawDataAdditions) JPEGDataWithCompression:]
-[BuddyPicture dealloc]
+[BuddyPicture removeBuddyPicture:]
-[BuddyPicture .cxx_destruct]
-[Presentity description]
+[IMEmojifier sharedInstance]
-[IMEmojifier init]
-[IMEmojifier addEmojiFontToAttributedString:usingBlock:]
-[IMEmojifier _emojifyString:maxLength:callback:]
-[IMMessage(IMRenderingAdditions) isSoloInlineImage]
+[BuddyPicture myPicture]
-[IMMe(IMRenderingUtilities) picture]
-[IMMe(IMRenderingUtilities) myPicture]
-[BuddyPicture currentFrame]
-[BuddyPicture currentFrameWithMaxSize:]
-[BuddyPicture _updateAnimationState]
-[BuddyPicture shouldAnimate]
-[BuddyPicture animating]
-[BuddyPicture imageWithMaxSize:frame:]
-[BuddyPicture size]
-[BuddyPicture _synchronizeFrame:]
-[NSImage(IMRenderingUtilities) largestRepPixelSize]
+[IMHandle(IMRenderingUtilities) largerGenericPicture]
+[BuddyPicture buddyPictureWithImage:]
-[BuddyPicture initWithImage:]
-[BuddyPicture initWithImage:key:]
+[NSColor(FezColorUtilAdditions) iMessageBalloonColor]
+[NSColor(FezColorUtilAdditions) cannedColorWithTag:]
+[NSGradient(FezColorUtilAdditions) cannedGradientPlist]
-[NSColor(FezColorUtilAdditions) webIntValue]
+[NSColor(FezColorUtilAdditions) colorWithWebIntValue:]
+[SOTranscriptSettings initialize]
+[SOTranscriptSettings _updateTranscriptStylePreferencesFromLegacyPrefsKey:deprecatedKey:toKey:]
+[SOTranscriptSettings defaultIMChatSettings]
___45+[SOTranscriptSettings defaultIMChatSettings]_block_invoke
-[SOTranscriptSettings initWithPreferencesKey:]
-[SOTranscriptSettings transcriptStyleID]
+[SOMessageFormatManager outgoingMessageFormatManager]
____buildDefaultMessageFormatManagers_block_invoke
-[SOMessageFormatManager initWithCoder:]
-[SOCannedMessageColor initWithCoder:]
-[SOMessageColor initWithCoder:]
-[SOMessageFormatManager init]
+[SOMessageColor defaultIncomingBackgroundMessageColor]
+[SOMessageColor messageColorForTag:]
___37+[SOMessageColor messageColorForTag:]_block_invoke
-[SOCannedMessageColor set_tag:]
+[SOMessageFormatManager defaultFont]
-[SOMessageFormatManager setBackgroundColorPolicy:]
-[SOMessageFormatManager backgroundColorPolicy]
+[SOMessageColor defaultOutgoingBackgroundMessageColor]
___55+[SOMessageColor defaultOutgoingBackgroundMessageColor]_block_invoke
-[SOMessageFormatManager setDefaultDisplayBackgroundMessageColor:]
+[NSColor(FezColorUtilAdditions) colorWithWebStringValue:]
+[NSColor(FezColorUtilAdditions) tagForCannedColor:]
-[NSColor(FezColorUtilAdditions) isEqualToColor:]
-[SOMessageFormatManager setDefaultDisplayFontMessageColor:]
-[SOMessageFormatManager setDefaultFont:]
-[SOMessageFormatManager setOverridesFontMessageColorWithDefault:]
-[SOMessageFormatManager setOverridesFontWithDefault:]
-[SOMessageFormatManager defaultFont]
-[BuddyCSSProvider initWithTranscriptStyleController:]
-[CSSProvider initWithTranscriptStyleController:]
+[SOMessageFormatManager incomingMessageFormatManager]
-[WebView(FezWebUtil) documentHeight]
-[WebView(FezWebUtil) clipRect]
-[WebView(FezWebUtil) handleURLRequest:fromWebView:withListener:ignoringAbout:]
+[TranscriptImageResourceProtocol canInitWithRequest:]
+[TranscriptImageResourceProtocol transcriptProtocolScheme]
-[TranscriptStyleController initWithWebView:transcriptID:]
-[TranscriptStyleController setStyleID:]
-[TranscriptStyleController beginChanges]
-[TranscriptStylePluginRegistry loadedPluginWithIdentifier:]
-[TranscriptStylePluginLoader loadedPluginWithIdentifier:]
-[MessageCSSProvider initWithTranscriptStyleController:]
-[TranscriptStyleController endChanges]
-[TranscriptStyleController _applyChanges]
-[TranscriptStyleController _applyQueuedCSSRules]
-[TranscriptStyleController bodyFinishLayout]
-[TranscriptStylePluginRegistry minHeightPerMessageForPluginWithIdentifier:]
-[TranscriptDOMController initWithTranscriptStyleController:]
-[TranscriptStyleController DOM]
-[TranscriptStyleController body]
-[TranscriptDOMEventHandler initWithController:]
-[ChatItemDOMProvider initWithController:]
-[DOMProvider initWithController:]
-[FileTransferDOMProvider initWithController:]
+[DateDOMProvider initialize]
___29+[DateDOMProvider initialize]_block_invoke
-[DateDOMProvider initWithController:]
-[ChatItemDOMProvider cacheImages]
-[ChatItemDOMProvider DOM]
-[DOMProvider controller]
-[TranscriptDOMController DOM]
+[TranscriptImageResourceProtocol canonicalRequestForRequest:]
-[TranscriptDOMController body]
-[TranscriptDOMController eventHandler]
-[TranscriptDOMController fileTransferEventHandler]
-[TranscriptDOMController _shouldOverrideSelectionColorForAqua]
-[TranscriptDOMController setNameStyle]
-[TranscriptDOMController setAllowsPlugins:]
-[TranscriptDOMController allowsPlugins]
-[TranscriptDOMController setWatchMessageAddressing:]
-[SOTranscriptSettings participantDisplay]
-[TranscriptDOMController showNamesAndPictures]
-[TranscriptStyleController showNamesAndPictures]
-[MessageCSSProvider showNamesAndPicturesIconSize]
-[SOMessageFormatManager defaultDisplayBackgroundMessageColor]
-[TranscriptStyleController localUserSetBackgroundColor:]
-[MessageCSSProvider setLocalBackgroundColor:]
-[SOMessageFormatManager defaultDisplayFontMessageColor]
-[SOCannedMessageColor colorForIMHandle:]
-[SOCannedMessageColor _tag]
-[TranscriptStyleController localUserSetFontColor:]
-[MessageCSSProvider setLocalFontColor:]
-[CSSProvider styleController]
-[NSColor(FezWebUtil) hexColor]
-[NSColor(FezWebUtil) _getRGBComponentValueRed:green:blue:]
-[TranscriptStyleController applyCSSSelector:property:value:]
-[TranscriptStyleController applyCSSSelector:property:value:priority:]
-[TranscriptStyleController remoteUserSetBackgroundColor:]
-[MessageCSSProvider setRemoteBackgroundColor:]
-[SOMessageFormatManager overridesFontMessageColorWithDefault]
-[NSFont(FezWebUtil) hasBoldAttribute]
-[NSFont(FezWebUtil) hasItalicAttribute]
-[TranscriptStyleController localUserSetFont:]
-[MessageCSSProvider setLocalFont:]
-[SOMessageFormatManager overridesFontWithDefault]
-[TranscriptStyleController remoteUserSetFont:]
-[MessageCSSProvider setRemoteFont:]
-[TranscriptStyleController clearCSSSelector:forProperties:]
-[TranscriptStyleController head]
+[MessageCSSProvider baseCSSFilePath]
-[TranscriptStyleController messageCSSProvider]
-[TranscriptStyleController setBuddyCSSProvider:]
-[BuddyCSSProvider setStyleController:]
-[CSSProvider setStyleController:]
-[TranscriptStyleController DOMCSSRuleForSelector:]
-[TranscriptStyleController _styleElement]
-[TranscriptStyleController setDOMCSSRule:forSelector:]
-[TranscriptImageResourceProtocol startLoading]
-[TranscriptImageResourceProtocol requestResourceData:fromURL:]
+[NSImage(IMRenderingUtilities) imageNamed:messagesImageState:size:invertColor:]
-[NSImage(IMRenderingUtilities) messagesTintedImageWithColor:withSize:]
-[SOTintedImageRep initWithImage:tintColor:]
-[SOTintedImageRep draw]
-[NSImage(IMRenderingUtilities) smallestRep]
-[TranscriptImageResourceProtocol stopLoading]
-[TranscriptStyleController chatItemGUIDs]
-[NSImage(IMRenderingUtilities) messagesTintedImageWithColor:]
-[NSDate(SocialUIAdditions) optimalDisplayString]
-[NSDate(SocialUIAdditions) relativeDaysSinceNow]
+[NSDate(SocialUIAdditions) dateFormatter]
-[NSMutableAttributedString(FezExtensions) setAlignment:]
-[IMEmojifier addEmojiFontToAttributedString:]
-[Presentity customPicture]
-[IMPerson(IMRenderingUtilities) imageDataBlocking]
+[BuddyImageCache sharedInstance]
-[BuddyImageCache init]
-[BuddyImageCache blockingImageDataForPerson:]
-[Presentity _setPicture:]
___46-[BuddyImageCache blockingImageDataForPerson:]_block_invoke
-[BuddyImageCache _setImageData:person:linkedPerson:]
-[BuddyImageCache _setImageData:forPerson:]
-[IMPerson(IMRenderingUtilities) cachedImageData]
-[BuddyImageCache imageDataWithoutLoadingForPerson:]
+[NSDate(SocialUIAdditions) timeFormatter]
+[ArchivedMessagePlaceholder setupArchivedMessageDecoding]
+[ArchivedMessagePlaceholder configureKeyedUnarchiver:]
-[ArchivedMessagePlaceholder initWithCoder:]
-[Presentity .cxx_destruct]
-[AppKitToSuperParserContext initWithAttributedString:baseWritingDirection:bodyBackgroundColor:bodyForegroundColor:]
-[AppKitToSuperParserContext name]
-[AppKitToSuperParserContext parser:foundAttributes:inRange:]
-[AppKitToSuperParserContext superFormatString]
-[NSColor(FezColorUtilAdditions) webStringValue]
-[AppKitToSuperParserContext fileTransferGUIDs]
+[NSDate(SocialUIAdditions) weekdayFormatter]
-[BuddyCSSProvider visibleIMHandles]
-[Presentity customPictureDataChanged:key:]
-[NSImage(IMRenderingUtilities) drawStretchedInFrame:inView:capWidth:alpha:]
-[IMHandle(PresentityAdditions) blockingIMHandlePictures]
-[ABPerson(IMRenderingUtilities) blockingIMHandlePictures]
-[BuddyPicture pictureIsIcon]
-[SOTranscriptSettings _userDefaultsDidChange:]
-[SOTranscriptSettings preferencesKey]
___43-[BuddyImageCache _setImageData:forPerson:]_block_invoke
-[IMHandle(PresentityAdditions) hasPicture]
-[NSDataRetainingImage copyWithZone:]
-[Presentity picture]
+[IMHandle(IMRenderingUtilities) genericPicture]
-[NSImage(IMRenderingUtilities) drawNicelyScaledInRect:inView:operation:fraction:]
-[NSImage(IMRenderingUtilities) drawNicelyScaledInRect:operation:fraction:]
-[Presentity statusMessageAsURL]
-[BuddyPicture drawInRect:operation:fraction:firstFrameOnly:scaled:]
-[BuddyPicture _noteLastDrawnTime]
-[BuddyPicture startAnimation]
-[BuddyPicture setAnimating:]
-[BuddyPicture _noteLastFrameChange]
+[BuddyPictureAnimator sharedInstance]
-[BuddyPictureAnimator init]
-[BuddyPictureAnimator addAnimatingBuddyPicture:]
-[BuddyPictureAnimator setupFramePulse]
-[BuddyPictureAnimator buddyPictureTimerFired:]
-[BuddyPicture _advancedNextFrame]
-[BuddyPicture nextFrameDelayForFrame:]
-[BuddyPictureAnimator shouldNotAnimate]
-[TranscriptToSuperParserContext _attributesForAttachmentWithAttributes:]
-[BuddyPicture stepAnimation]
-[BuddyPicture frames]
-[TranscriptDOMController domProvider]
-[ChatItemDOMProvider dateDOMProvider]
-[DateDOMProvider clearCache]
-[TranscriptStyleController clear]
-[MessageCSSProvider clear]
-[BuddyCSSProvider clear]
-[TranscriptStyleController beginBatchViewChange]
-[BuddyCSSProvider setIconSize:]
-[TranscriptStyleController endBatchViewChange]
-[TranscriptDOMController emptyBody]
-[TranscriptDOMController appendChatItem:]
-[TranscriptDOMController setLastChatItem:]
-[TranscriptDOMController insertChatItem:betweenPreviousItem:andNextItem:]
-[TranscriptStyleController applyRulesForChatItem:]
-[ChatItemDOMProvider parseChatItem:]
-[ChatItemDOMProvider setTextDirection:]
+[ChatItemDOMProvider _hideHandlesInTranscript]
-[DateDOMProvider parseLongDate:]
-[DateDOMProvider _genericDateFragmentForDate:formatter:cache:]
-[DateDOMProvider _formatDate:withFormatter:]
-[DateDOMProvider _baseDateElementWithString:timestamp:]
-[TranscriptDOMController _setChatItemGroupAttributes:]
-[DOMNode(FezWebUtil) lastMessageChildElement]
-[BuddyCSSProvider createRulesForIMHandle:]
-[BuddyCSSProvider updateInfoForIMHandle:]
-[BuddyCSSProvider updateInfoForIMHandle:force:]
-[MessageCSSProvider shouldSelectOnlyFirstMessageInGroup]
-[BuddyCSSProvider updatePictureForIMHandle:]
-[BuddyCSSProvider _updatePictureForIMHandle:forceRule:]
-[Presentity pictureKey]
-[MessageCSSProvider updateRulesForMessage:]
+[SOMessageFormatManager displayAutomaticBackgroundColorForMessage:]
-[SOMessageFormatManager displayAutomaticBackgroundColorForMessage:]
-[IMMessage(IMRenderingAdditions) embeddedBackgroundColor]
+[IMMessage(IMRenderingAdditions) colorForIMColorAttribute:]
-[SOMessageFormatManager displayBackgroundColorForHandle:]
-[Presentity lastBalloonColor]
+[NSColor(FezWebColorAdditions) _colorFromMessagesBalloonStringValue:]
+[NSColor(FezColorUtilAdditions) clearBalloonColor]
+[SOMessageFormatManager displayAutomaticFontColorForMessage:]
-[SOMessageFormatManager displayAutomaticFontColorForMessage:]
-[IMMessage(IMRenderingAdditions) embeddedFontColor]
-[Presentity lastCustomFontColor]
-[IMMessage(IMRenderingAdditions) fontFamily]
-[Presentity lastCustomFontFamily]
-[IMMessage(IMRenderingAdditions) fontSize]
-[Presentity lastCustomFontSize]
-[MessageCSSProvider updateRulesForBalloonColor:forceRule:]
-[NSColor(FezColorUtilAdditions) isCannedColor]
-[MessageCSSProvider updateRulesForFontColor:forceRule:]
-[MessageCSSProvider updateRulesForFontFamily:forceRule:]
-[MessageCSSProvider updateRulesForFontSize:forceRule:]
-[ChatItemDOMProvider parseMessageChatItem:appendToChatItem:]
+[NSColor(FezColorUtilAdditions) alternateSelectedControlColorSRGB]
-[NSColor(FezColorUtilAdditions) looksEqualToColor:]
-[Presentity randomBalloonColor]
-[SODefaultOutgoingMessageColor colorForIMHandle:]
+[ABPresentitySaver sharedInstance]
-[ABPresentitySaver ensureABPropertiesExist]
___44-[ABPresentitySaver ensureABPropertiesExist]_block_invoke
-[IMHandle(PresentityAdditions) hasAnimatingPicture]
-[DOMDocument(FezWebUtil) createDivElement]
-[ChatItemDOMProvider parseMessageText:chatItem:]
-[SuperToWebKitParserContext initWithChatItem:textToParse:elementName:domController:]
-[SuperToWebKitParserContext setChatItem:]
-[SuperToWebKitParserContext setMessage:]
-[SuperToWebKitParserContext setController:]
-[SuperToWebKitParserContext setMessageElement:]
-[SuperToWebKitParserContext name]
-[SuperToWebKitParserContext parserDidStart:bodyAttributes:]
-[SuperToWebKitParserContext controller]
-[DateDOMProvider preciseStringForDate:]
-[DateDOMProvider formatDate:roundInterval:showDate:showTime:showSeconds:]
-[SuperToWebKitParserContext _workaroundWebKitLineHeightBug]
-[SuperToWebKitParserContext shouldPreprocess]
-[SuperToWebKitParserContext parser:preprocessedAttributesForAttributes:range:]
-[SuperToWebKitParserContext parser:foundAttributes:inRange:characters:]
-[SuperToWebKitParserContext appendText:toElement:]
-[SuperToWebKitParserContext parserDidEnd:]
-[SuperToWebKitParserContext outMessageElement]
-[SuperToWebKitParserContext isFileTransferElement]
-[SuperToWebKitParserContext isMediaElement]
-[SuperToWebKitParserContext hasInteractableText]
-[DateDOMProvider parsePreciseDate:]
-[Presentity setLastCustomFontColor:]
-[Presentity setLastCustomFontFamily:]
-[Presentity setLastCustomFontSize:]
-[IMMessage(IMRenderingAdditions) updateSenderBackgroundColor]
-[SuperToWebKitParserContext parser:foundAttributes:inRange:fileTransferGUID:filename:bookmark:width:height:]
-[FileTransfer isiMessage]
-[SuperToWebKitParserContext message]
-[FileTransfer isImage]
-[FileTransfer isMovie]
-[FileTransfer isPass]
-[FileTransfer isMap]
-[FileTransferDOMProvider guidsForAllOwnedTransfers]
-[FileTransferDOMProvider DOM]
-[FileTransferDOMProvider updateClassName:forTransfer:]
-[NSColor(FezColorUtilAdditions) shouldInvert]
-[NSDate(SocialUIAdditions) isDayDifferent:]
-[DateDOMProvider parseDate:]
-[NSDate(SocialUIAdditions) isMinuteDifferent:]
-[NSDate(ParserHelper) stringTimeIntervalSinceReferenceDate]
-[DateDOMProvider parseTime:changeToDateStampTomorrow:]
+[SOMessageFormatManager displayFontColorForMessage:]
-[SOMessageFormatManager displayFontColorForMessage:]
-[TranscriptStyleController DOM2XMediaRuleForSelector:]
-[TranscriptStyleController setDOM2XMediaRule:forSelector:]
___copy_helper_block_
-[TranscriptImageResourceProtocol setPreviousScaleFactor:]
-[TranscriptImageResourceProtocol setPreviousMax:]
+[BuddyPicture buddyPictureForKey:]
___63-[TranscriptImageResourceProtocol requestResourceData:fromURL:]_block_invoke
-[TranscriptImageResourceProtocol _balloonColor:fromMe:is2x:]
+[NSGradient(FezColorUtilAdditions) gradientFromBalloonColor:]
___46-[IMEmojifier addEmojiFontToAttributedString:]_block_invoke
-[BuddyPictureAnimator accountLoggedIn:]
-[BuddyPictureAnimator startAnimationIfDesired]
___destroy_helper_block_
-[BuddyPictureAnimator appDidBecomeActive:]
+[SOTranscriptSettings defaultGroupChatSettings]
___48+[SOTranscriptSettings defaultGroupChatSettings]_block_invoke
-[NSColor(FezWebColorAdditions) _messagesBalloonStringValue]
-[ABPerson(FezAdditions) setAndSaveValue:property:]
-[Presentity updateLastEmbeddedBalloonColorWithColor:onDate:]
-[Presentity lastColorDate]
-[Presentity setLastBalloonColor:]
-[Presentity setLastColorDate:]
-[TranscriptDOMController styleController]
-[TranscriptStyleController styleID]
+[FileTransferResourceLoader sharedInstance]
-[FileTransferResourceLoader init]
-[FileTransferResourceLoader scaledImagePathForFileTransfer:]
-[FileTransferDOMProvider setSourceForInlineMedia:forFileTransfer:]
-[NSString(IMRenderingUtilities) escapedString]
-[DOMElement(FezWebUtil) boundsRectForElement]
-[TranscriptDOMEventHandler handleEvent:]
-[TranscriptDOMController lastChatItem]
-[TranscriptDOMController rebuildChatItem:]
-[TranscriptDOMController updateOldElement:toMatchNewElement:]
___57-[IMEmojifier addEmojiFontToAttributedString:usingBlock:]_block_invoke
+[ArchivedMessagePlaceholder setupArchivedMessageEncoding]
-[TranscriptDOMController rectOfChatItemWithGUID:]
+[NSColor(FezColorUtilAdditions) legacyBalloonColor]
+[NSColor(FezColorUtilAdditions) randomizedCannedColors]
-[DOMNode(FezWebUtil) parentElementWithNodeName:]
-[TranscriptDOMController isSampleTranscript]
-[SOTranscriptSettings setTranscriptStyleID:]
-[SOTranscriptSettings _updatePreferencesWithValue:forKey:]
-[TranscriptStyleController dealloc]
-[MessageCSSProvider dealloc]
-[MessageCSSProvider .cxx_destruct]
-[TranscriptDOMController setStyleController:]
-[SOTranscriptSettings setParticipantDisplay:]
-[TranscriptStyleController personPictureChanged:]
-[TranscriptStyleController applyCSSSelector:fromDictionary:]
-[MessageCSSProvider provideContrastOverridesForCriterion:color:fromMe:]
-[NSColor(FezWebUtil) grayness]
-[TranscriptDOMController removeChatItemWithGUID:]
-[TranscriptDOMController moveChatItemGUID:toBetweenPreviousItem:andNextItem:]
-[TranscriptDOMController showPictures]
-[TranscriptStyleController showPictures]
-[TranscriptDOMController showNames]
-[ABPresentitySaver saveABProperties]
-[ABPresentitySaver _saveABProperties]
-[IMPerson(IMRenderingUtilities) requestImageData]
-[BuddyImageCache imageDataForPerson:]
-[BuddyImageCache _imageDataForPerson:linkedPerson:]
___copy_helper_block_80
___52-[BuddyImageCache _imageDataForPerson:linkedPerson:]_block_invoke
___destroy_helper_block_81
-[BuddyImageCache _abChanged:]
___copy_helper_block_105
___30-[BuddyImageCache _abChanged:]_block_invoke
-[BuddyImageCache clearCacheForPerson:]
___destroy_helper_block_106
-[TranscriptStyleController webView]
-[FileTransferEventHandler handleEvent:]
-[SuperToAppKitParserContext initWithAttributedString:shouldEncodeFileTransfers:]
-[SuperToAppKitParserContext initWithAttributedString:]
-[SuperToAppKitParserContext name]
-[SuperToAppKitParserContext parserDidStart:bodyAttributes:]
_sAppKitColorFromColorString
-[SuperToAppKitParserContext parser:foundAttributes:inRange:characters:]
-[SuperToAppKitParserContext appKitAttributedString]
-[NSColor(FezColorUtilAdditions) colorByDarkeningOrBrightening:]
-[ArchivedMessagePlaceholder encodeWithCoder:]
-[IMMessage(IMRenderingAdditions) superMessageSubject]
-[IMMessage(IMRenderingAdditions) superText]
-[SuperToAppKitParserContext setShouldEncodeInlineAttachments:]
-[SuperToAppKitParserContext baseWritingDirection]
-[ChatItemDOMProvider errorElementForMessageGuid:]
-[IMFileTransfer(IMRenderingUtilities) isFileUserVisible]
-[IMFileTransfer(IMRenderingUtilities) userVisibleLocalURL]
-[FileTransferDOMProvider _flagsChanged:]
-[FileTransferDOMProvider altFunction]
-[FileTransferDOMProvider setSingleOptionPressed:]
-[FileTransferDOMProvider singleOptionPressed]
-[FileTransferDOMProvider setAltFunction:]
-[SOCannedMessageColor cannedColorTag]
-[SOMessageFormatManager displayFontColorForHandle:]
-[TranscriptDOMController setSampleTranscriptMode]
+[SOMessageFormatManager _defaultMessageFormatSettingsDidChange:]
+[Presentity sampleIMHandle]
___28+[Presentity sampleIMHandle]_block_invoke
-[SOCannedMessageColor isCannedColor]
___65+[SOMessageFormatManager _defaultMessageFormatSettingsDidChange:]_block_invoke
-[SOMessageFormatManager encodeWithCoder:]
-[SOCannedMessageColor encodeWithCoder:]
-[SOMessageColor encodeWithCoder:]
+[SOMessageFormatManager setSOAgentOutgoingMessagePrefs]
-[SOMessageFormatManager outgoingEmbeddedBackgroundColorForHandle:]
-[SOMessageColor cannedColorTag]
-[SOMessageColor isCannedColor]
-[SODefaultOutgoingMessageColor encodeWithCoder:]
-[TranscriptStyleController remoteUserSetFontColor:]
-[MessageCSSProvider setRemoteFontColor:]
-[Presentity clearColorAndFontProperties]
-[TranscriptStyleController personInfoChanged:]
___copy_helper_block_90
___destroy_helper_block_91
-[MessageCSSProvider updateRulesForBackgroundColor:forceRule:]
-[BuddyCSSProvider .cxx_destruct]
-[TranscriptDOMController dealloc]
-[TranscriptDOMController .cxx_destruct]
-[ChatItemDOMProvider dealloc]
-[ChatItemDOMProvider .cxx_destruct]
-[FileTransferDOMProvider dealloc]
-[FileTransferDOMProvider .cxx_destruct]
-[DOMProvider .cxx_destruct]
-[DateDOMProvider .cxx_destruct]
-[TranscriptDOMEventHandler .cxx_destruct]
+[NSImage(IMRenderingUtilities) imageNamed:messagesImageState:size:]
-[SOTintedImageRep copyWithZone:]
-[FileTransfer icon]
-[FileTransfer _updateIconUsingLocalPath]
-[FileTransfer _setIcon:]
+[FileTransferIconLoader sharedInstance]
-[FileTransferIconLoader init]
-[FileTransferIconLoader queueURL:bookmark:forSize:withDelegate:]
-[FileTransferIconLoaderOperation init]
-[FileTransferIconLoaderOperation setUrl:]
-[FileTransferIconLoaderOperation setBookmark:]
-[FileTransferIconLoaderOperation setDelegate:]
-[FileTransferIconLoaderOperation setThumbnailSize:]
-[FileTransferIconLoaderOperation main]
-[FileTransfer otherPersonName]
-[FileTransfer otherIMHandle]
-[FileTransfer displayName]
-[FileTransfer _updateDisplayNameCache]
+[NSImage(IMRenderingUtilities) imageNamed:messagesImageState:]
-[FileTransferIconLoaderOperation _notifyDelegate:]
-[FileTransfer fileTransferIconDidLoad:]
-[FileTransfer _updateIconUsingFileTransferInformation]
-[SuperToAppKitParserContext parser:foundAttributes:inRange:fileTransferGUID:filename:bookmark:width:height:]
-[FileTransferEventHandler performButtonAction:onTransfer:]
-[FileTransfer download]
+[FileTransfer downloadPath]
-[FileTransferDOMProvider isResponsibleForTransfer:]
-[FileTransferDOMProvider fileTransferUpdated:inlineMedia:]
-[FileTransfer revealInFinder]
-[BuddyPictureAnimator appDidBecomeResignActive:]
-[BuddyPictureAnimator stopAnimation]
-[BuddyPictureAnimator cleanupFrameTimer]
-[FileTransfer previewItemURL]
-[FileTransfer previewItemTitle]
-[FileTransfer errorString]
-[NSURL(FezWebUtil) openURL]
-[NSURL(IMRenderingUtilities) sanitizeNoPrompt]
-[TranscriptDOMController setIsAnimatingReceipt:]
-[TranscriptDOMEventHandler removeElementOnAnimationEnd:queue:]
-[TranscriptDOMEventHandler _removeReceiptWithGUID:ofType:]
-[TranscriptDOMEventHandler stopAnimatingOnAnimationEnd:]
-[TranscriptStyleController window]
+[TranscriptStyleController _loadBundleForStyle:]
-[TranscriptStyleController _rebuildCSSRuleMap]
-[TranscriptStyleController _rebuildCSSContent]
-[TranscriptStyleController changeCount]
-[TranscriptStyleController applyCurrentChanges]
-[TranscriptStyleController clearCSSSelector:]
-[TranscriptStyleController _setNeedsRebuild]
-[TranscriptStyleController setBackgroundColor:]
-[TranscriptStyleController setBackgroundImage:]
-[TranscriptStyleController backgroundImageURL]
-[TranscriptStyleController screenBoundsForElement:]
-[TranscriptStyleController screenBoundsForElementID:]
-[TranscriptStyleController acceptNode:]
-[TranscriptStyleController minHeightPerMessage]
-[TranscriptStyleController requiresCSSRebuild]
-[TranscriptStyleController setRequiresCSSRebuild:]
-[TranscriptStyleController setMessageCSSProvider:]
-[TranscriptStyleController buddyCSSProvider]
-[TranscriptStyleController setWebView:]
-[TranscriptStyleController setDOM:]
-[TranscriptStyleController setHead:]
-[TranscriptStyleController setBody:]
-[TranscriptStyleController .cxx_destruct]
+[NSGradient(FezColorUtilAdditions) cannedGradientWithTag:]
+[NSGradient(FezColorUtilAdditions) _logColorAsSRGB:]
+[NSGradient(FezColorUtilAdditions) _logColorAsHSB:]
+[NSGradient(FezColorUtilAdditions) highlightGradientForColor:]
-[NSGradient(FezColorUtilAdditions) startColor]
-[NSGradient(FezColorUtilAdditions) endColor]
+[NSColor(FezColorUtilAdditions) highlightColorForColor:]
+[NSColor(FezColorUtilAdditions) alternateCannedColorForColor:]
+[NSColor(FezColorUtilAdditions) whiteColorSRGB]
-[NSColor(FezColorUtilAdditions) isAquaColor]
-[NSColor(FezColorUtilAdditions) colorWithAdjustedHue:saturation:brightness:]
-[DOMElement(FezWebUtil) appendValue:toAttribute:]
-[DOMElement(FezWebUtil) parentElementWithAttribute:havingValue:]
-[DOMElement(FezWebUtil) makeDescendantsPerformFunction:]
-[DOMNode(FezWebUtil) parentElementWithPossibleClassNames:]
-[DOMDocument(FezWebUtil) createSpanElement]
-[NSColor(FezWebUtil) whiteness]
-[NSColor(FezWebUtil) rgbaColor]
-[NSColor(FezWebUtil) safeLinkColor]
-[NSColor(FezWebUtil) htmlString]
-[NSColor(FezWebUtil) cssValue]
-[NSColor(FezWebUtil) bgCssValue]
+[NSString(FezWebUtil) stringWithNonBreakingSpace]
+[NSString(FezWebUtil) stringWithHorizontalEllipsis]
+[NSFont(FezWebUtil) defaultFontPointSizeForTextSize:]
+[NSFont(FezWebUtil) textSize]
+[NSFont(FezWebUtil) setTextSize:]
+[NSFont(FezWebUtil) canIncreaseTextSize]
+[NSFont(FezWebUtil) increaseTextSize]
+[NSFont(FezWebUtil) canDecreaseTextSize]
+[NSFont(FezWebUtil) decreaseTextSize]
+[NSFont(FezWebUtil) canResetTextSize]
+[NSFont(FezWebUtil) resetTextSize]
-[NSFont(FezWebUtil) cssFontFamilyName]
-[NSFont(FezWebUtil) fontDeltaName]
-[NSFont(FezWebUtil) cssFontSizeAndFamilyIsImportant:]
-[NSFont(FezWebUtil) cssFontSizeAndFamily]
-[NSFont(FezWebUtil) cssValueIsImportant:]
-[NSFont(FezWebUtil) cssValueDictionaryIsImportant:]
-[NSFont(FezWebUtil) cssValue]
-[NSFont(FezWebUtil) aimFontSize]
-[NSImage(IMRenderingUtilities) largestRep]
-[NSImage(IMRenderingUtilities) _resizedImageWithFrame:inSize:]
-[NSImage(IMRenderingUtilities) imageWithSize:]
-[NSImage(IMRenderingUtilities) JPEGDataWithMaxSize:minSize:compression:]
-[NSImage(IMRenderingUtilities) bitmapImageRep]
-[NSImage(IMRenderingUtilities) bitmapImageRepWithPadding:]
-[NSImage(IMRenderingUtilities) sizeImageToFitInSize:]
-[NSImage(IMRenderingUtilities) imageByApplyingShadow:]
-[SOTintedImageRep hasAlpha]
-[SOTintedImageRep .cxx_destruct]
-[ShadowedImageRep initWithImage:shadow:]
-[ShadowedImageRep copyWithZone:]
-[ShadowedImageRep draw]
-[ShadowedImageRep hasAlpha]
-[ShadowedImageRep .cxx_destruct]
-[NSImageRep(GIFDetectionAdditions) isGIF]
-[NSButton(ImageSizingAdditions) _templateImageFrom:ofSize:]
-[NSButton(ImageSizingAdditions) setTemplateImageSize:]
-[NSData(ImageTypeChecking) isJPEG]
+[NSDataRetainingImage canInitWithPasteboard:]
-[NSDataRetainingImage initWithContentsOfFile:]
-[NSDataRetainingImage initWithPath:]
-[NSDataRetainingImage initWithPasteboard:sender:]
-[NSDataRetainingImage initWithPasteboard:]
-[NSDataRetainingImage writeToPath:withName:unique:atomically:]
-[NSDataRetainingImage .cxx_destruct]
-[NSImage(NSDataRetainingWarnings) originalData]
+[PhoneNumberFormatter nonNumbersSet]
+[PhoneNumberFormatter nonNumbersAndDashSet]
+[PhoneNumberFormatter getObjectValue:forString:errorDescription:]
-[PhoneNumberFormatter getObjectValue:forString:errorDescription:]
+[PhoneNumberFormatter stringForObjectValue:]
-[PhoneNumberFormatter stringForObjectValue:]
+[PhoneNumberFormatter smsNumberStringFromString:]
+[PhoneNumberFormatter plainPhoneNumberFromString:]
-[AppKitToSuperParserContext _attributesForAttachmentWithAttributes:]
-[AppKitToSuperParserContext resultsForLogging]
-[AppKitToSuperParserContext _preloadImage:]
-[AppKitToSuperParserContext mutableFileTransferGUIDs]
-[AppKitToSuperParserContext .cxx_destruct]
-[InputLineToSuperParserContext initWithAttributedString:baseWritingDirection:bodyBackgroundColor:bodyForegroundColor:handle:finished:]
-[InputLineToSuperParserContext _attributesForAttachmentWithAttributes:]
___72-[InputLineToSuperParserContext _attributesForAttachmentWithAttributes:]_block_invoke
-[InputLineToSuperParserContext localURLsToArchiveAndSend]
-[InputLineToSuperParserContext .cxx_destruct]
-[SuperToAppKitParserContext bodyBackgroundColor]
-[SuperToAppKitParserContext resultsForLogging]
-[SuperToAppKitParserContext shouldEncodeInlineAttachments]
-[SuperToAppKitParserContext .cxx_destruct]
-[IMHandle(PresentityAdditions) setBlockingIMHandlePictures:]
-[IMHandle(PresentityAdditions) image]
-[Presentity isCustomPictureChecked]
-[Presentity abPersonChangedPicture]
-[Presentity _imPersonPictureChanged:]
-[Presentity setPictureFromImage:]
___21-[Presentity picture]_block_invoke
-[Presentity setPicture:]
-[Presentity customPictureRegardlessOfBlocking]
-[SuperToWebKitParserContext _outMessageElementAsString]
-[SuperToWebKitParserContext resultsForLogging]
-[SuperToWebKitParserContext chatItem]
-[SuperToWebKitParserContext messageElement]
-[SuperToWebKitParserContext setHasInteractableText:]
-[SuperToWebKitParserContext setIsFileTransferElement:]
-[SuperToWebKitParserContext setIsMediaElement:]
-[SuperToWebKitParserContext isPassElement]
-[SuperToWebKitParserContext setIsPassElement:]
-[SuperToWebKitParserContext isAudioMessage]
-[SuperToWebKitParserContext setIsAudioMessage:]
-[SuperToWebKitParserContext willFillBubble]
-[SuperToWebKitParserContext setWillFillBubble:]
-[SuperToWebKitParserContext didTrimEmotePrefix]
-[SuperToWebKitParserContext setDidTrimEmotePrefix:]
-[SuperToWebKitParserContext containerElement]
-[SuperToWebKitParserContext setContainerElement:]
-[SuperToWebKitParserContext .cxx_destruct]
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_35
___destroy_helper_block_36
-[IMEmojifier .cxx_destruct]
-[BuddyImageCache dealloc]
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_81
___destroy_helper_block_82
___copy_helper_block_110
___destroy_helper_block_111
-[BuddyImageCache abPersonIDToImageData]
-[BuddyImageCache abPersonIDToConsumeTag]
-[BuddyImageCache .cxx_destruct]
-[SuperToSpeechParserContext name]
-[SuperToSpeechParserContext parser:foundAttributes:inRange:characters:]
-[SuperToSpeechParserContext parser:foundAttributes:inRange:fileTransferGUID:filename:bookmark:width:height:]
+[SOMessageColor defaultFontMessageColor]
+[SOMessageColor messageColorForColor:]
-[SOMessageColor colorForIMHandle:]
-[SOMessageColor copyWithZone:]
-[SOSimpleMessageColor colorForIMHandle:]
-[SOSimpleMessageColor initWithCoder:]
-[SOSimpleMessageColor encodeWithCoder:]
-[SOSimpleMessageColor _color]
-[SOSimpleMessageColor set_color:]
-[SOSimpleMessageColor .cxx_destruct]
-[SODefaultOutgoingMessageColor initWithCoder:]
-[NSNumber(Cocoa64bitUtil) fourCharCode]
+[NSNumber(Cocoa64bitUtil) numberWithFourCharCode:]
-[TranscriptDOMEventHandler runBlockOnAnimationEnd:forElement:]
-[TranscriptDOMEventHandler domController]
-[TranscriptDOMEventHandler selectedMessagesAreTextSelectable]
-[TranscriptDOMEventHandler setSelectedMessagesAreTextSelectable:]
-[TranscriptDOMEventHandler anyTextSelectable]
-[TranscriptDOMEventHandler setAnyTextSelectable:]
-[TranscriptDOMEventHandler queuedRemoves]
-[TranscriptDOMEventHandler setQueuedRemoves:]
-[TranscriptDOMEventHandler elementIDToAnimationBlock]
-[TranscriptDOMEventHandler setElementIDToAnimationBlock:]
-[ArchivedMessagePlaceholder initWithMessage:]
-[ArchivedMessagePlaceholder message]
-[ArchivedMessagePlaceholder .cxx_destruct]
___CopyDDResultArrayByScanningStringForURLs_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[NSString(IMRenderingUtilities) timestampWithInterval:]
-[NSString(IMRenderingUtilities) isAppKitSupportedImageType]
-[IMMessage(IMRenderingAdditions) isInteresting]
-[IMMessage(IMRenderingAdditions) messageContainsText]
-[IMMessage(IMRenderingAdditions) speechDescription]
-[IMMessage(IMRenderingAdditions) hasFontAttributes]
-[NSURL(IMRenderingUtilities) newMoviePreview]
-[NSURL(IMRenderingUtilities) newAudioMessagePreview:]
-[NSURL(IMRenderingUtilities) newFileTransferPreview]
-[NSURL(IMRenderingUtilities) iconPreview]
-[NSURL(IMRenderingUtilities) formattedNameFromVCFURL]
-[NSURL(IMRenderingUtilities) securityScopedURL]
-[NSURL(IMRenderingUtilities) inputLinePreviewForAudioMessage]
___62-[NSURL(IMRenderingUtilities) inputLinePreviewForAudioMessage]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSURL(IMRenderingUtilities) renderedWaveFormForAudioFile:]
-[NSURL(IMRenderingUtilities) _waveformPowerLevelsCountForDuration:]
-[NSURL(IMRenderingUtilities) _waveformWithPowerLevels:powerLevelsCount:is2x:]
-[NSURL(IMRenderingUtilities) _audioPowerLevels:powerLevelsCount:]
-[FileTransfer dealloc]
+[FileTransfer removeLegacyStorageForGUID:]
___43+[FileTransfer removeLegacyStorageForGUID:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[FileTransfer archiveLocalURL:completionBlock:]
___48+[FileTransfer archiveLocalURL:completionBlock:]_block_invoke
___48+[FileTransfer archiveLocalURL:completionBlock:]_block_invoke_2
___copy_helper_block_42
___destroy_helper_block_43
___copy_helper_block_45
___destroy_helper_block_46
-[FileTransfer createUserVisibleLocation]
___41-[FileTransfer createUserVisibleLocation]_block_invoke
___41-[FileTransfer createUserVisibleLocation]_block_invoke_2
___copy_helper_block_149
___destroy_helper_block_150
___copy_helper_block_152
___destroy_helper_block_153
-[FileTransfer _revealInFinder:]
-[FileTransfer saveToLibrary]
-[FileTransfer setDesktopPicture]
-[FileTransfer openURL]
-[FileTransfer previewImage]
___28-[FileTransfer previewImage]_block_invoke
___copy_helper_block_282
___destroy_helper_block_283
-[FileTransfer _cancel]
-[FileTransfer newOpenMenuItem]
-[FileTransfer newSaveToLibraryMenuItem]
-[FileTransfer newSetDesktopPictureMenuItem]
-[FileTransfer menuItemsGivenQuickLookSelector:target:]
-[FileTransfer isCopying]
-[FileTransfer setIsCopying:]
-[FileTransfer iMessage]
-[FileTransfer setIMessage:]
-[FileTransfer map]
-[FileTransfer setMap:]
-[FileTransfer pass]
-[FileTransfer setPass:]
-[FileTransfer image]
-[FileTransfer setImage:]
-[FileTransfer movie]
-[FileTransfer setMovie:]
-[FileTransfer audioMessage]
-[FileTransfer setAudioMessage:]
-[FileTransfer previewImageGenerator]
-[FileTransfer setPreviewImageGenerator:]
-[FileTransfer .cxx_destruct]
-[FileTransferIconLoader dealloc]
-[FileTransferIconLoader cancelNotificationsForDelegate:]
-[FileTransferIconLoader queueURL:forSize:withDelegate:]
-[FileTransferIconLoader .cxx_destruct]
-[FileTransferIconLoaderOperation url]
-[FileTransferIconLoaderOperation bookmark]
-[FileTransferIconLoaderOperation thumbnailSize]
-[FileTransferIconLoaderOperation delegate]
-[FileTransferIconLoaderOperation .cxx_destruct]
-[FileTransferEventHandler .cxx_destruct]
+[NSFileManager(UserFolders) userDesktopFolder]
+[ChatItemDOMProvider initialize]
___Block_byref_object_copy_
___Block_byref_object_dispose_
-[ChatItemDOMProvider _parseMessageStatus:]
-[ChatItemDOMProvider parseServiceChatItem:]
-[ChatItemDOMProvider _parseTypingChatItem:]
-[ChatItemDOMProvider _parseMessageChatItemFlags:]
-[ChatItemDOMProvider parseEmoteChatItem:appendToChatItem:]
-[ChatItemDOMProvider _compactDateStamp]
-[ChatItemDOMProvider _parseSenderChatItem:]
-[ChatItemDOMProvider parseDateChatItem:]
-[ChatItemDOMProvider _parseGroupActionChatItem:]
-[ChatItemDOMProvider _parseGroupTitleChangeChatItem:]
-[ChatItemDOMProvider _parseParticipantChangeChatItem:]
-[ChatItemDOMProvider _parseMessageActionChatItem:]
-[ChatItemDOMProvider _parseLocationShareActionChatItem:]
-[ChatItemDOMProvider _parseBuddyIcon:]
-[ChatItemDOMProvider parseMessageSubject:]
-[ChatItemDOMProvider selectChatItem:]
-[ChatItemDOMProvider deselectChatItem:]
-[ChatItemDOMProvider setDateDOMProvider:]
-[ChatItemDOMProvider animateReceiptChanges]
-[ChatItemDOMProvider setAnimateReceiptChanges:]
-[ChatItemDOMProvider createDebugElements]
-[ChatItemDOMProvider setCreateDebugElements:]
-[ChatItemDOMProvider guidsForAllOwnedTransfers]
-[ChatItemDOMProvider setGuidsForAllOwnedTransfers:]
-[ChatItemDOMProvider selectedGUIDs]
-[ChatItemDOMProvider setSelectedGUIDs:]
-[ChatItemDOMProvider altFunction]
-[ChatItemDOMProvider setAltFunction:]
-[ChatItemDOMProvider singleOptionPressed]
-[ChatItemDOMProvider setSingleOptionPressed:]
-[DOMProvider cacheImages]
-[TranscriptDOMDDItem domElement]
-[TranscriptDOMDDItem setDomElement:]
-[TranscriptDOMDDItem ddResult]
-[TranscriptDOMDDItem setDdResult:]
-[TranscriptDOMDDItem url]
-[TranscriptDOMDDItem setUrl:]
-[TranscriptDOMDDItem chatItem]
-[TranscriptDOMDDItem setChatItem:]
-[TranscriptDOMDDItem .cxx_destruct]
-[TranscriptDOMController _anonymizeChatWindow:]
-[TranscriptDOMController removeChatItem:]
___42-[TranscriptDOMController removeChatItem:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[TranscriptDOMController showMyPicture]
-[TranscriptDOMController setTextSize:]
-[TranscriptDOMController dateFormatDidChange]
-[TranscriptDOMController setDOM:]
-[TranscriptDOMController setBody:]
-[TranscriptDOMController setDomProvider:]
-[TranscriptDOMController fileTransferDomProvider]
-[TranscriptDOMController setFileTransferDomProvider:]
-[TranscriptDOMController setEventHandler:]
-[TranscriptDOMController setFileTransferEventHandler:]
-[TranscriptDOMController lastMessage]
-[TranscriptDOMController setLastMessage:]
-[TranscriptDOMController isAnimatingReceipt]
-[TranscriptDOMController chatItemGUIDToDDElement]
-[TranscriptDOMController setChatItemGUIDToDDElement:]
-[MessageCSSProvider updateRulesForCriterion:displayColor:fromMe:important:]
-[MessageCSSProvider standardRuleDictionaryForColor:fromMe:important:is2x:]
-[MessageCSSProvider additionalCSSFilePath]
-[MessageCSSProvider shouldRestrictInlineImageHeight]
-[MessageCSSProvider showPicturesIconSize]
-[MessageCSSProvider visibleIMHandles]
-[MessageCSSProvider visibleBalloonColors]
-[MessageCSSProvider visibleBackgroundColors]
-[MessageCSSProvider visibleFontColors]
-[MessageCSSProvider visibleFontFamilies]
-[MessageCSSProvider visibleFontSizes]
-[BuddyCSSProvider _personiconUrlForID:accountGUID:iconSize:hostPath:]
-[BuddyCSSProvider iconSize]
-[DateDOMProvider _adjustElement:usingFormatter:]
-[DateDOMProvider _adjustElementsInArray:withFormat:]
___53-[DateDOMProvider _adjustElementsInArray:withFormat:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[DateDOMProvider adjustDateFragmentsForTimeChange]
___51-[DateDOMProvider adjustDateFragmentsForTimeChange]_block_invoke
___copy_helper_block_49
___destroy_helper_block_50
-[DateDOMProvider dateFormatDidChange]
-[DateDOMProvider longStringForDate:]
-[DateDOMProvider dateStringForDate:]
-[DateDOMProvider timeStringForDate:]
-[DateDOMProvider preciseFragments]
-[DateDOMProvider setPreciseFragments:]
-[DateDOMProvider longFragments]
-[DateDOMProvider setLongFragments:]
-[DateDOMProvider dateFragments]
-[DateDOMProvider setDateFragments:]
-[DateDOMProvider timeFragments]
-[DateDOMProvider setTimeFragments:]
-[DateDOMProvider timeOrDateFragments]
-[DateDOMProvider setTimeOrDateFragments:]
-[FileTransferDOMProvider cacheImages]
-[FileTransferDOMProvider parsePass:]
-[FileTransferDOMProvider parseMap:]
-[FileTransferDOMProvider parseAudioMessageWithChatItem:transfer:listenedTo:]
-[FileTransferDOMProvider parseFileTransferGUID:filename:width:height:forChatItem:outWillFillBubble:]
-[FileTransferDOMProvider parseFileTransferGUID:filename:forChatItem:]
-[FileTransferDOMProvider _userVisiblePathCreated:]
-[FileTransferDOMProvider setGuidsForAllOwnedTransfers:]
-[FileTransferResourceLoader scaledImagePathForFileTransfer:blocking:]
-[FileTransferResourceLoader _scaleImageFileTransfer:toMaxSize:saveToLocation:blocking:]
___88-[FileTransferResourceLoader _scaleImageFileTransfer:toMaxSize:saveToLocation:blocking:]_block_invoke
___88-[FileTransferResourceLoader _scaleImageFileTransfer:toMaxSize:saveToLocation:blocking:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___88-[FileTransferResourceLoader _scaleImageFileTransfer:toMaxSize:saveToLocation:blocking:]_block_invoke70
___copy_helper_block_71
___destroy_helper_block_72
___88-[FileTransferResourceLoader _scaleImageFileTransfer:toMaxSize:saveToLocation:blocking:]_block_invoke74
___copy_helper_block_77
___destroy_helper_block_78
-[FileTransferResourceLoader passForGUID:]
-[FileTransferResourceLoader loadPassForGUID:atURL:]
-[FileTransferResourceLoader loadPassAtURL:]
-[FileTransferResourceLoader mapsGeneratedForGUID:]
-[FileTransferResourceLoader assignFileTransferGUID:toFileURL:]
-[FileTransferResourceLoader _mapFromFileURL:]
-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke
___Block_byref_object_copy_
___Block_byref_object_dispose_
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke100
___copy_helper_block_101
___destroy_helper_block_102
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke104
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke109
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke_2
___copy_helper_block_112
___destroy_helper_block_113
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke117
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke_2118
___copy_helper_block_121
___destroy_helper_block_122
___57-[FileTransferResourceLoader mapsGeneratedForMapFileURL:]_block_invoke124
___copy_helper_block_125
___destroy_helper_block_126
___copy_helper_block_128
___destroy_helper_block_129
___copy_helper_block_131
___destroy_helper_block_132
___copy_helper_block_137
___destroy_helper_block_138
-[FileTransferResourceLoader renderedMapImageForGUID:]
-[FileTransferResourceLoader renderedMapImageForMapFileURL:]
___60-[FileTransferResourceLoader renderedMapImageForMapFileURL:]_block_invoke
___copy_helper_block_148
___destroy_helper_block_149
___60-[FileTransferResourceLoader renderedMapImageForMapFileURL:]_block_invoke151
___copy_helper_block_152
___destroy_helper_block_153
___60-[FileTransferResourceLoader renderedMapImageForMapFileURL:]_block_invoke155
___copy_helper_block_156
___destroy_helper_block_157
___60-[FileTransferResourceLoader renderedMapImageForMapFileURL:]_block_invoke161
___copy_helper_block_162
___destroy_helper_block_163
-[FileTransferResourceLoader postMapLoadComplete:]
-[FileTransferResourceLoader imageGUIDToScaledDownPath]
-[FileTransferResourceLoader setImageGUIDToScaledDownPath:]
-[FileTransferResourceLoader imageGUIDsWritingToDisk]
-[FileTransferResourceLoader setImageGUIDsWritingToDisk:]
-[FileTransferResourceLoader imageGUIDsNotWorthScaling]
-[FileTransferResourceLoader setImageGUIDsNotWorthScaling:]
-[FileTransferResourceLoader scalingQueue]
-[FileTransferResourceLoader setScalingQueue:]
-[FileTransferResourceLoader diskWritingQueue]
-[FileTransferResourceLoader setDiskWritingQueue:]
-[FileTransferResourceLoader passURLToPKPassMap]
-[FileTransferResourceLoader setPassURLToPKPassMap:]
-[FileTransferResourceLoader passGUIDToURLMap]
-[FileTransferResourceLoader setPassGUIDToURLMap:]
-[FileTransferResourceLoader mapLoadingQueue]
-[FileTransferResourceLoader setMapLoadingQueue:]
-[FileTransferResourceLoader mapVariableQueue]
-[FileTransferResourceLoader setMapVariableQueue:]
-[FileTransferResourceLoader loadingMapFileURLToSemaphore]
-[FileTransferResourceLoader setLoadingMapFileURLToSemaphore:]
-[FileTransferResourceLoader fileURLToMapURLMap]
-[FileTransferResourceLoader setFileURLToMapURLMap:]
-[FileTransferResourceLoader mapURLtoRenderedImageMap]
-[FileTransferResourceLoader setMapURLtoRenderedImageMap:]
-[FileTransferResourceLoader mapGUIDtoMapFileURLMap]
-[FileTransferResourceLoader setMapGUIDtoMapFileURLMap:]
-[FileTransferResourceLoader .cxx_destruct]
-[PKPass(IMRenderingUtilities) framedIcon]
___DrawCollectedBuddyPicturesInRect_block_invoke
+[IKPictureTakerRecentPicture(FezAdditions) mostRecentPicture]
___29+[BuddyPicture setMyPicture:]_block_invoke
___29+[BuddyPicture setMyPicture:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_102
___destroy_helper_block_103
+[BuddyPicture keyForData:]
+[BuddyPicture runLoopDrawingModes]
-[BuddyPicture initWithData:]
-[BuddyPicture _animationPrefsChanged:]
-[BuddyPicture description]
-[BuddyPicture data]
-[BuddyPicture flushCaches]
-[BuddyPicture beginContentAccess]
-[BuddyPicture endContentAccess]
-[BuddyPicture discardContentIfPossible]
-[BuddyPicture isContentDiscarded]
-[BuddyPicture hasNiceAlpha]
-[BuddyPicture addToRecentPicturesWithUserInfo:]
-[BuddyPicture stopAnimation]
-[BuddyPicture nextFrameDelay]
-[BuddyPicture imageWithMaxSize:]
-[BuddyPicture imageWithSize:]
-[BuddyPicture _dataRepresentation]
-[BuddyPicture dataRepresentation]
-[BuddyPicture TIFFRepresentation]
-[BuddyPicture animatedGIFDataWithSize:minSize:maxDataSize:]
-[BuddyPicture setPictureIsIcon:]
-[BuddyPicture setData:]
-[BuddyPicture setImage:]
-[BuddyPicture setKey:]
-[BuddyPicture frameDelays]
-[BuddyPicture setFrameDelays:]
-[BuddyPicture animatedRep]
-[BuddyPicture setAnimatedRep:]
-[BuddyPicture cacheKeys]
-[BuddyPicture setCacheKeys:]
-[BuddyPicture lastDrawn]
-[BuddyPicture setLastDrawn:]
-[BuddyPicture lastFrameChange]
-[BuddyPicture setLastFrameChange:]
-[BuddyPictureAnimator systemBecameActive:]
-[BuddyPictureAnimator removeAnimatingBuddyPicture:]
-[BuddyPictureAnimator buddyPicturesToPost]
-[BuddyPictureAnimator timerCenter]
-[BuddyPictureAnimator mainAnimationTimer]
-[BuddyPictureAnimator systemIdleMonitor]
-[BuddyPictureAnimator .cxx_destruct]
___copy_helper_block_
___destroy_helper_block_
-[TranscriptImageResourceProtocol _thoughtBalloonFromMe:is2x:]
-[TranscriptImageResourceProtocol previousScaleFactor]
-[TranscriptImageResourceProtocol previousMax]
-[IMMe(IMRenderingUtilities) setPicture:]
-[IMMe(IMRenderingUtilities) image]
-[ABPerson(IMRenderingUtilities) mergeVCardWithABPerson:]
-[ABPerson(IMRenderingUtilities) mergedAddressBookMatch]
+[ABPerson(IMRenderingUtilities) cardFromPasteboardContent:]
+[ABPerson(IMRenderingUtilities) cardFromVCardData:]
-[ABPerson(IMRenderingUtilities) openInAddressBookAndEdit:]
-[ABPerson(IMRenderingUtilities) setBlockingIMHandlePictures:]
-[IMHandle(IMRenderingUtilities) mobileSiblings]
-[IMHandle(IMRenderingUtilities) cachedMonograms]
-[IMHandle(IMRenderingUtilities) setCachedMonograms:]
+[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:]
+[IMHandle(IMRenderingUtilities) _registerForPersonChanges]
+[IMHandle(IMRenderingUtilities) _personChangedForMonogram:]
-[IMHandle(IMRenderingUtilities) reloadCachedMonograms]
-[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:blocking:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___70-[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:blocking:]_block_invoke
___70-[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:blocking:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_108
___destroy_helper_block_109
-[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:]
-[SOTranscriptSettings dealloc]
-[SOTranscriptSettings .cxx_destruct]
-[TranscriptStylePluginLoader .cxx_destruct]
-[TranscriptStylePluginRegistry .cxx_destruct]
+[SOMessageFormatManager displayBackgroundColorForMessage:]
+[SOMessageFormatManager displayBackgroundColorForHandle:]
+[SOMessageFormatManager displayFontColorForHandle:]
___copy_helper_block_
___destroy_helper_block_
-[SOMessageFormatManager displayBackgroundColorForMessage:]
-[SOMessageFormatManager .cxx_destruct]
GCC_except_table15
GCC_except_table16
GCC_except_table23
GCC_except_table26
GCC_except_table7
GCC_except_table11
GCC_except_table17
GCC_except_table1
GCC_except_table7
GCC_except_table4
GCC_except_table24
GCC_except_table51
GCC_except_table35
GCC_except_table36
GCC_except_table42
GCC_except_table50
GCC_except_table53
GCC_except_table55
GCC_except_table56
GCC_except_table58
GCC_except_table10
GCC_except_table9
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp140
___block_literal_global141
___block_descriptor_tmp208
___block_literal_global209
___block_descriptor_tmp
___block_descriptor_tmp37
___block_descriptor_tmp
___block_descriptor_tmp84
___block_descriptor_tmp92
___block_descriptor_tmp112
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp8
___block_literal_global9
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp44
___block_descriptor_tmp48
___block_descriptor_tmp151
___block_descriptor_tmp154
___block_descriptor_tmp284
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp38
___block_descriptor_tmp51
___block_descriptor_tmp
___block_descriptor_tmp73
___block_descriptor_tmp79
___block_descriptor_tmp82
___block_descriptor_tmp103
___block_descriptor_tmp107
___block_descriptor_tmp114
___block_descriptor_tmp123
___block_descriptor_tmp127
___block_descriptor_tmp130
___block_descriptor_tmp134
___block_descriptor_tmp139
___block_descriptor_tmp150
___block_descriptor_tmp154
___block_descriptor_tmp158
___block_descriptor_tmp164
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp101
___block_descriptor_tmp104
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp111
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp35
___block_literal_global36
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp197
_OBJC_IVAR_$_TranscriptStyleController._webView
_OBJC_IVAR_$_TranscriptStyleController._DOM
_OBJC_IVAR_$_TranscriptStyleController._head
_OBJC_IVAR_$_TranscriptStyleController._body
_OBJC_IVAR_$_TranscriptStyleController._styleID
_OBJC_IVAR_$_TranscriptStyleController._messageCSSProvider
_OBJC_IVAR_$_TranscriptStyleController._buddyCSSProvider
_OBJC_IVAR_$_NSDataRetainingImage._originalData
_OBJC_IVAR_$_NSDataRetainingImage._fileExtension
_OBJC_IVAR_$_AppKitToSuperParserContext._superFormat
_OBJC_IVAR_$_AppKitToSuperParserContext._mutableFileTransferGUIDs
_OBJC_IVAR_$_AppKitToSuperParserContext._bodyForegroundColor
_OBJC_IVAR_$_AppKitToSuperParserContext._baseWritingDirection
_OBJC_IVAR_$_AppKitToSuperParserContext._bodyBackgroundColor
_OBJC_IVAR_$_AppKitToSuperParserContext._didAddBodyAttributes
_OBJC_IVAR_$_InputLineToSuperParserContext._finished
_OBJC_IVAR_$_InputLineToSuperParserContext._handle
_OBJC_IVAR_$_InputLineToSuperParserContext._localURLsToArchiveAndSend
_OBJC_IVAR_$_SuperToAppKitParserContext._appKitAttributedString
_OBJC_IVAR_$_SuperToAppKitParserContext._bodyBackgroundColor
_OBJC_IVAR_$_SuperToAppKitParserContext._bodyForegroundColor
_OBJC_IVAR_$_SuperToAppKitParserContext._shouldEncodeFileTransfers
_OBJC_IVAR_$_SuperToAppKitParserContext._didAddBodyAttributes
_OBJC_IVAR_$_SuperToAppKitParserContext._baseWritingDirection
_OBJC_IVAR_$_SuperToAppKitParserContext._shouldEncodeInlineAttachments
_OBJC_IVAR_$_Presentity._randomBalloonColor
_OBJC_IVAR_$_Presentity._lastBalloonColor
_OBJC_IVAR_$_Presentity._lastCustomFontFamily
_OBJC_IVAR_$_Presentity._lastCustomFontSize
_OBJC_IVAR_$_Presentity._lastCustomFontColor
_OBJC_IVAR_$_Presentity._picture
_OBJC_IVAR_$_Presentity._isCustomPictureChecked
_OBJC_IVAR_$_Presentity._customPicture
_OBJC_IVAR_$_Presentity._lastColorDate
_OBJC_IVAR_$_SuperToWebKitParserContext._containerElement
_OBJC_IVAR_$_SuperToWebKitParserContext._messageElement
_OBJC_IVAR_$_SuperToWebKitParserContext._message
_OBJC_IVAR_$_SuperToWebKitParserContext._controller
_OBJC_IVAR_$_SuperToWebKitParserContext._chatItem
_OBJC_IVAR_$_SuperToWebKitParserContext._hasInteractableText
_OBJC_IVAR_$_SuperToWebKitParserContext._didTrimEmotePrefix
_OBJC_IVAR_$_SuperToWebKitParserContext._isPassElement
_OBJC_IVAR_$_SuperToWebKitParserContext._isMediaElement
_OBJC_IVAR_$_SuperToWebKitParserContext._willFillBubble
_OBJC_IVAR_$_SuperToWebKitParserContext._isAudioMessage
_OBJC_IVAR_$_SuperToWebKitParserContext._isFileTransferElement
_OBJC_IVAR_$_IMEmojifier._emojiCharSet
_OBJC_IVAR_$_BuddyImageCache._abPersonIDToImageData
_OBJC_IVAR_$_BuddyImageCache._abPersonIDToConsumeTag
_OBJC_IVAR_$_SOSimpleMessageColor.__color
_OBJC_IVAR_$_SOCannedMessageColor.__tag
_OBJC_IVAR_$_TranscriptDOMEventHandler._domController
_OBJC_IVAR_$_TranscriptDOMEventHandler._anyTextSelectable
_OBJC_IVAR_$_TranscriptDOMEventHandler._selectedMessagesAreTextSelectable
_OBJC_IVAR_$_TranscriptDOMEventHandler._queuedRemoves
_OBJC_IVAR_$_TranscriptDOMEventHandler._elementIDToAnimationBlock
_OBJC_IVAR_$_ArchivedMessagePlaceholder._message
_OBJC_IVAR_$_FileTransfer._otherIMHandle
_OBJC_IVAR_$_FileTransfer._iMessage
_OBJC_IVAR_$_FileTransfer._map
_OBJC_IVAR_$_FileTransfer._pass
_OBJC_IVAR_$_FileTransfer._image
_OBJC_IVAR_$_FileTransfer._movie
_OBJC_IVAR_$_FileTransfer._icon
_OBJC_IVAR_$_FileTransfer._iconWasGuessedFromTransferInformation
_OBJC_IVAR_$_FileTransfer._previewImageGenerator
_OBJC_IVAR_$_FileTransfer._previewImage
_OBJC_IVAR_$_FileTransfer._displayNameCache
_OBJC_IVAR_$_FileTransfer._isCopying
_OBJC_IVAR_$_FileTransfer._audioMessage
_OBJC_IVAR_$_FileTransferIconLoader._queue
_OBJC_IVAR_$_FileTransferIconLoaderOperation._delegate
_OBJC_IVAR_$_FileTransferIconLoaderOperation._url
_OBJC_IVAR_$_FileTransferIconLoaderOperation._bookmark
_OBJC_IVAR_$_FileTransferIconLoaderOperation._thumbnailSize
_OBJC_IVAR_$_FileTransferEventHandler._mouseDownOnTransferButton
_OBJC_IVAR_$_FileTransferEventHandler._mouseDownTransferGUID
_OBJC_IVAR_$_ChatItemDOMProvider._guidsForAllOwnedTransfers
_OBJC_IVAR_$_ChatItemDOMProvider._dateDOMProvider
_OBJC_IVAR_$_ChatItemDOMProvider._selectedGUIDs
_OBJC_IVAR_$_ChatItemDOMProvider._createDebugElements
_OBJC_IVAR_$_ChatItemDOMProvider._animateReceiptChanges
_OBJC_IVAR_$_ChatItemDOMProvider._altFunction
_OBJC_IVAR_$_ChatItemDOMProvider._singleOptionPressed
_OBJC_IVAR_$_DOMProvider._controller
_OBJC_IVAR_$_TranscriptDOMDDItem._domElement
_OBJC_IVAR_$_TranscriptDOMDDItem._ddResult
_OBJC_IVAR_$_TranscriptDOMDDItem._url
_OBJC_IVAR_$_TranscriptDOMDDItem._chatItem
_OBJC_IVAR_$_TranscriptDOMController._DOM
_OBJC_IVAR_$_TranscriptDOMController._body
_OBJC_IVAR_$_TranscriptDOMController._styleController
_OBJC_IVAR_$_TranscriptDOMController._eventHandler
_OBJC_IVAR_$_TranscriptDOMController._fileTransferEventHandler
_OBJC_IVAR_$_TranscriptDOMController._domProvider
_OBJC_IVAR_$_TranscriptDOMController._fileTransferDomProvider
_OBJC_IVAR_$_TranscriptDOMController._lastChatItem
_OBJC_IVAR_$_TranscriptDOMController._lastMessage
_OBJC_IVAR_$_TranscriptDOMController._isAnimatingReceipt
_OBJC_IVAR_$_TranscriptDOMController._allowsPlugins
_OBJC_IVAR_$_TranscriptDOMController._chatItemGUIDToDDElement
_OBJC_IVAR_$_MessageCSSProvider._visibleIMHandles
_OBJC_IVAR_$_MessageCSSProvider._visibleBalloonColors
_OBJC_IVAR_$_MessageCSSProvider._visibleBackgroundColors
_OBJC_IVAR_$_MessageCSSProvider._visibleFontColors
_OBJC_IVAR_$_MessageCSSProvider._visibleFontFamilies
_OBJC_IVAR_$_MessageCSSProvider._visibleFontSizes
_OBJC_IVAR_$_CSSProvider._styleController
_OBJC_IVAR_$_BuddyCSSProvider._iconSize
_OBJC_IVAR_$_BuddyCSSProvider._visibleIMHandles
_OBJC_IVAR_$_DateDOMProvider._preciseFragments
_OBJC_IVAR_$_DateDOMProvider._longFragments
_OBJC_IVAR_$_DateDOMProvider._dateFragments
_OBJC_IVAR_$_DateDOMProvider._timeFragments
_OBJC_IVAR_$_DateDOMProvider._timeOrDateFragments
_OBJC_IVAR_$_FileTransferDOMProvider._guidsForAllOwnedTransfers
_OBJC_IVAR_$_FileTransferDOMProvider._altFunction
_OBJC_IVAR_$_FileTransferDOMProvider._singleOptionPressed
_OBJC_IVAR_$_FileTransferResourceLoader._imageGUIDToScaledDownPath
_OBJC_IVAR_$_FileTransferResourceLoader._imageGUIDsWritingToDisk
_OBJC_IVAR_$_FileTransferResourceLoader._imageGUIDsNotWorthScaling
_OBJC_IVAR_$_FileTransferResourceLoader._scalingQueue
_OBJC_IVAR_$_FileTransferResourceLoader._diskWritingQueue
_OBJC_IVAR_$_FileTransferResourceLoader._passURLToPKPassMap
_OBJC_IVAR_$_FileTransferResourceLoader._passGUIDToURLMap
_OBJC_IVAR_$_FileTransferResourceLoader._mapLoadingQueue
_OBJC_IVAR_$_FileTransferResourceLoader._mapVariableQueue
_OBJC_IVAR_$_FileTransferResourceLoader._loadingMapFileURLToSemaphore
_OBJC_IVAR_$_FileTransferResourceLoader._fileURLToMapURLMap
_OBJC_IVAR_$_FileTransferResourceLoader._mapURLtoRenderedImageMap
_OBJC_IVAR_$_FileTransferResourceLoader._mapGUIDtoMapFileURLMap
_OBJC_IVAR_$_BuddyPicture._animating
_OBJC_IVAR_$_BuddyPicture._pictureIsIcon
_OBJC_IVAR_$_BuddyPicture._data
_OBJC_IVAR_$_BuddyPicture._image
_OBJC_IVAR_$_BuddyPicture._key
_OBJC_IVAR_$_BuddyPicture._cacheKeys
_OBJC_IVAR_$_BuddyPicture._animatedRep
_OBJC_IVAR_$_BuddyPicture._frameDelays
_OBJC_IVAR_$_BuddyPicture._lastDrawn
_OBJC_IVAR_$_BuddyPicture._lastFrameChange
_OBJC_IVAR_$_BuddyPictureAnimator._buddyPicturesToPost
_OBJC_IVAR_$_BuddyPictureAnimator._shouldNotAnimate
_OBJC_IVAR_$_BuddyPictureAnimator._timerCenter
_OBJC_IVAR_$_BuddyPictureAnimator._systemIdleMonitor
_OBJC_IVAR_$_BuddyPictureAnimator._mainAnimationTimer
_OBJC_IVAR_$_TranscriptImageResourceProtocol._previousScaleFactor
_OBJC_IVAR_$_TranscriptImageResourceProtocol._previousMax
_OBJC_IVAR_$_SOTranscriptSettings._transcriptStyleID
_OBJC_IVAR_$_SOTranscriptSettings._participantDisplay
_OBJC_IVAR_$_SOTranscriptSettings._preferencesKey
_OBJC_IVAR_$_SOMessageFormatManager._backgroundColorPolicy
_OBJC_IVAR_$_SOMessageFormatManager._defaultDisplayBackgroundMessageColor
_OBJC_IVAR_$_SOMessageFormatManager._overridesFontMessageColorWithDefault
_OBJC_IVAR_$_SOMessageFormatManager._defaultDisplayFontMessageColor
_OBJC_IVAR_$_SOMessageFormatManager._overridesFontWithDefault
_OBJC_IVAR_$_SOMessageFormatManager._defaultFont
-[IMMessage(IMRenderingAdditions) isInteresting].att
+[ChatItemDOMProvider _hideHandlesInTranscript].hideHandles
_sCannedColorPlist
_sCannedGradientPlist
_sCannedColorToGradient
_sCannedColorToAlternateColorPlist
+[NSColor(FezColorUtilAdditions) randomizedCannedColors].sRandomizedCannedColors
+[NSColor(FezColorUtilAdditions) alternateSelectedControlColorSRGB].alternateSelectedControlColorSRGB
+[NSColor(FezColorUtilAdditions) whiteColorSRGB].whiteColorSRGB
_sGetEscapedSafeNameOfFontFamilyName.fontFamilyToEscapedSafeNameMap
-[NSColor(FezWebUtil) whiteness].sCache
-[NSColor(FezWebUtil) grayness].sCache
-[NSColor(FezWebUtil) rgbaColor].sCache
-[NSColor(FezWebUtil) hexColor].sCache
-[NSColor(FezWebUtil) htmlString].sCache
_currentCalendar
+[NSDate(SocialUIAdditions) dateFormatter].dateFormatter
+[NSDate(SocialUIAdditions) weekdayFormatter].weekdayFormatter
+[NSDate(SocialUIAdditions) timeFormatter].timeFormatter
-[NSDate(SocialUIAdditions) relativeDaysSinceNow].calendar
-[NSFont(FezWebUtil) cssFontFamilyName].sCSSFontFamilyNames
-[NSFont(FezWebUtil) cssFontSizeAndFamilyIsImportant:].sImportantFontSizeAndFamilyMap
-[NSFont(FezWebUtil) cssFontSizeAndFamilyIsImportant:].sFontSizeAndFamilyMap
+[NSImage(IMRenderingUtilities) imageNamed:messagesImageState:size:invertColor:].sImageCache
+[PhoneNumberFormatter nonNumbersSet].sNonNumberSet
+[PhoneNumberFormatter nonNumbersAndDashSet].sNonNumberAndDashSet
-[IMFileTransfer(IMRenderingUtilities) isFileUserVisible].databasePrefix
+[ABPresentitySaver sharedInstance].sharedInstance
-[ABPresentitySaver ensureABPropertiesExist].onceToken
-[Presentity randomBalloonColor].cannedColorCursor
+[Presentity sampleIMHandle].singleton
+[Presentity sampleIMHandle].onceToken
-[Presentity picture].iMessageMePicture
-[Presentity picture].onceToken
-[Presentity statusMessageAsURL].requiredURLCharacters
-[SuperToWebKitParserContext _workaroundWebKitLineHeightBug].charactersToTriggerLineHeightAdjustment
-[SuperToWebKitParserContext appendText:toElement:].newlineAndSeparatorCharacterSet
+[IMEmojifier sharedInstance].sharedInstance
+[BuddyImageCache sharedInstance].sSharedInstance
+[SOMessageColor defaultOutgoingBackgroundMessageColor].singleton
+[SOMessageColor defaultOutgoingBackgroundMessageColor].onceToken
+[SOMessageColor messageColorForTag:].tagColorDictionary
+[SOMessageColor messageColorForTag:].onceToken
-[TranscriptDOMEventHandler handleEvent:].keyEvents
_sSODDScanner
_sIMColors
+[FileTransfer removeLegacyStorageForGUID:].archiveFolder
_sBundleToUse
__sharedFileTransferIconLoader
_sShowRolloverDates
-[TranscriptDOMController updateOldElement:toMatchNewElement:].replaceElementNames
+[DateDOMProvider initialize].once
_sDisplayStyles
_sFormatters
_sFileTransferResourceLoader
_DrawCollectedBuddyPicturesInRect.pictureShadow
_DrawCollectedBuddyPicturesInRect.onceToken
_sBuddyPictureCache
_sMyPicture
+[BuddyPicture buddyPictureStore].sBuddyPictureStore
+[BuddyPicture runLoopDrawingModes].modes
+[BuddyPictureAnimator sharedInstance].sBuddyPictureAnimator
_sBubbleGloss
_sBubbleMask
_sLocalThoughtBalloon
_sBubbleGloss2x
_sBubbleMask2x
_sLocalThoughtBalloon2x
_sLeftBalloonDict
_sRightBalloonDict
_sLeftBalloonDict2x
_sRightBalloonDict2x
-[TranscriptImageResourceProtocol requestResourceData:fromURL:].mirroredImages
-[TranscriptImageResourceProtocol _thoughtBalloonFromMe:is2x:].remoteThoughtBalloon
-[TranscriptImageResourceProtocol _thoughtBalloonFromMe:is2x:].remoteThoughtBalloon2x
_sCardsBlockingIMHandlePictures
_sDefaultPicture
_sLargerDefaultPicture
+[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:].cachedMonograms
_sRegisteredForPersonChanges
-[IMHandle(IMRenderingUtilities) monogramWithDiameter:style:blocking:].placeholderMonogram
+[SOTranscriptSettings defaultIMChatSettings].singleton
+[SOTranscriptSettings defaultIMChatSettings].onceToken
+[SOTranscriptSettings defaultGroupChatSettings].singleton
+[SOTranscriptSettings defaultGroupChatSettings].onceToken
_sTransriptStylePluginRegistry
_defaultIncomingMessageFormatManagerSingleton
_defaultOutgoingMessageFormatManagerSingleton
__buildDefaultMessageFormatManagers.onceToken
+[SOMessageFormatManager _defaultMessageFormatSettingsDidChange:].needsToSaveDefaultPreferences
_Color_W
_CopyDDResultArrayByScanningStringForURLs
_CreatePathForRoundedRect
_DrawCollectedBuddyPicturesInRect
_EnsureSizeSafeForNSImage
_FezWebUtilTextSizeDisplayDidChangeNotification
_FileTransferDidCopyToUserVisibleLocationNotification
_FileTransferIconUpdatedNotification
_FileTransferWillCopyToUserVisibleLocationNotification
_FlipContextAboutRect
_GrowProportionally
_IMHandleMonogramDidChangeNotification
_MyBuddyPictureDidChangeNotification
_NearestPosition
_OBJC_CLASS_$_ABPresentitySaver
_OBJC_CLASS_$_AppKitToSuperParserContext
_OBJC_CLASS_$_ArchivedMessagePlaceholder
_OBJC_CLASS_$_BuddyCSSProvider
_OBJC_CLASS_$_BuddyImageCache
_OBJC_CLASS_$_BuddyPicture
_OBJC_CLASS_$_BuddyPictureAnimator
_OBJC_CLASS_$_CSSProvider
_OBJC_CLASS_$_ChatItemDOMProvider
_OBJC_CLASS_$_DOMProvider
_OBJC_CLASS_$_DateDOMProvider
_OBJC_CLASS_$_FileTransfer
_OBJC_CLASS_$_FileTransferDOMProvider
_OBJC_CLASS_$_FileTransferEventHandler
_OBJC_CLASS_$_FileTransferIconLoader
_OBJC_CLASS_$_FileTransferIconLoaderOperation
_OBJC_CLASS_$_FileTransferResourceLoader
_OBJC_CLASS_$_IMEmojifier
_OBJC_CLASS_$_InputLineToSuperParserContext
_OBJC_CLASS_$_MessageCSSProvider
_OBJC_CLASS_$_NSDataRetainingImage
_OBJC_CLASS_$_Person
_OBJC_CLASS_$_PhoneNumberFormatter
_OBJC_CLASS_$_Presentity
_OBJC_CLASS_$_SOCannedMessageColor
_OBJC_CLASS_$_SODefaultOutgoingMessageColor
_OBJC_CLASS_$_SOMessageColor
_OBJC_CLASS_$_SOMessageFormatManager
_OBJC_CLASS_$_SOSimpleMessageColor
_OBJC_CLASS_$_SOTintedImageRep
_OBJC_CLASS_$_SOTranscriptSettings
_OBJC_CLASS_$_ShadowedImageRep
_OBJC_CLASS_$_SuperToAppKitParserContext
_OBJC_CLASS_$_SuperToSpeechParserContext
_OBJC_CLASS_$_SuperToWebKitParserContext
_OBJC_CLASS_$_TranscriptDOMController
_OBJC_CLASS_$_TranscriptDOMDDItem
_OBJC_CLASS_$_TranscriptDOMEventHandler
_OBJC_CLASS_$_TranscriptImageResourceProtocol
_OBJC_CLASS_$_TranscriptStyleController
_OBJC_CLASS_$_TranscriptStylePluginLoader
_OBJC_CLASS_$_TranscriptStylePluginRegistry
_OBJC_CLASS_$_TranscriptToSuperParserContext
_OBJC_IVAR_$_BuddyPicture._currentframe
_OBJC_IVAR_$_BuddyPicture._frames
_OBJC_IVAR_$_BuddyPicture._lookedForAnimatedRep
_OBJC_IVAR_$_BuddyPicture._size
_OBJC_IVAR_$_FileTransferIconLoaderOperation._options
_OBJC_IVAR_$_SOTintedImageRep._imageToTint
_OBJC_IVAR_$_SOTintedImageRep._tintColor
_OBJC_IVAR_$_ShadowedImageRep._imageToShadow
_OBJC_IVAR_$_ShadowedImageRep._shadow
_OBJC_IVAR_$_TranscriptStyleController._2xRuleMap
_OBJC_IVAR_$_TranscriptStyleController._2xRules
_OBJC_IVAR_$_TranscriptStyleController._backgroundColor
_OBJC_IVAR_$_TranscriptStyleController._backgroundImage
_OBJC_IVAR_$_TranscriptStyleController._batchChangeRequiresRebuild
_OBJC_IVAR_$_TranscriptStyleController._changeCount
_OBJC_IVAR_$_TranscriptStyleController._cssCache
_OBJC_IVAR_$_TranscriptStyleController._cssCacheOrder
_OBJC_IVAR_$_TranscriptStyleController._cssRuleMap
_OBJC_IVAR_$_TranscriptStyleController._dirtyCSSRules
_OBJC_IVAR_$_TranscriptStyleController._inBatchViewChangeCount
_OBJC_IVAR_$_TranscriptStyleController._messageContentIsHidden
_OBJC_IVAR_$_TranscriptStyleController._requiresCSSRebuild
_OBJC_IVAR_$_TranscriptStyleController._watchMessageAddressing
_OBJC_IVAR_$_TranscriptStylePluginLoader._pluginIdentifiers
_OBJC_IVAR_$_TranscriptStylePluginRegistry._pluginLoader
_OBJC_METACLASS_$_ABPresentitySaver
_OBJC_METACLASS_$_AppKitToSuperParserContext
_OBJC_METACLASS_$_ArchivedMessagePlaceholder
_OBJC_METACLASS_$_BuddyCSSProvider
_OBJC_METACLASS_$_BuddyImageCache
_OBJC_METACLASS_$_BuddyPicture
_OBJC_METACLASS_$_BuddyPictureAnimator
_OBJC_METACLASS_$_CSSProvider
_OBJC_METACLASS_$_ChatItemDOMProvider
_OBJC_METACLASS_$_DOMProvider
_OBJC_METACLASS_$_DateDOMProvider
_OBJC_METACLASS_$_FileTransfer
_OBJC_METACLASS_$_FileTransferDOMProvider
_OBJC_METACLASS_$_FileTransferEventHandler
_OBJC_METACLASS_$_FileTransferIconLoader
_OBJC_METACLASS_$_FileTransferIconLoaderOperation
_OBJC_METACLASS_$_FileTransferResourceLoader
_OBJC_METACLASS_$_IMEmojifier
_OBJC_METACLASS_$_InputLineToSuperParserContext
_OBJC_METACLASS_$_MessageCSSProvider
_OBJC_METACLASS_$_NSDataRetainingImage
_OBJC_METACLASS_$_Person
_OBJC_METACLASS_$_PhoneNumberFormatter
_OBJC_METACLASS_$_Presentity
_OBJC_METACLASS_$_SOCannedMessageColor
_OBJC_METACLASS_$_SODefaultOutgoingMessageColor
_OBJC_METACLASS_$_SOMessageColor
_OBJC_METACLASS_$_SOMessageFormatManager
_OBJC_METACLASS_$_SOSimpleMessageColor
_OBJC_METACLASS_$_SOTintedImageRep
_OBJC_METACLASS_$_SOTranscriptSettings
_OBJC_METACLASS_$_ShadowedImageRep
_OBJC_METACLASS_$_SuperToAppKitParserContext
_OBJC_METACLASS_$_SuperToSpeechParserContext
_OBJC_METACLASS_$_SuperToWebKitParserContext
_OBJC_METACLASS_$_TranscriptDOMController
_OBJC_METACLASS_$_TranscriptDOMDDItem
_OBJC_METACLASS_$_TranscriptDOMEventHandler
_OBJC_METACLASS_$_TranscriptImageResourceProtocol
_OBJC_METACLASS_$_TranscriptStyleController
_OBJC_METACLASS_$_TranscriptStylePluginLoader
_OBJC_METACLASS_$_TranscriptStylePluginRegistry
_OBJC_METACLASS_$_TranscriptToSuperParserContext
_PersonPictureChangedNotification
_PointConstrainInsideRect
_RectCenteredInRect
_RectConstrainInsideRect
_RectOfSizeAtPoint
_RectOfSizeIn
_RectOfSizeWithMarginIn
_RectToFitIn
_RectToFitInAccordingToHeight
_RectToFitInAccordingToWidth
_RectToFitWithMarginIn
_RectWithAspect
_SOBalloonsTranscriptStyleID
_SOBoxesTranscriptStyleID
_SOCommonPreferencesDomain
_SOCompactTranscriptStyleID
_SODefaultTranscriptStyleID
_SOMessageColorBlackColorTag
_SOMessageColorIMessageBalloonColorTag
_SOMessageColorIncomingClearBalloonColorTag
_SOMessageColorLegacyBalloonColorTag
_SOMessageColorWhiteColorTag
_SOMessageFormatManagerBackgroundColorPolicyDidChangeNotification
_SOMessageFormatManagerBackgroundColorPolicyKey
_SOMessageFormatManagerDefaultBackgroundColorKey
_SOMessageFormatManagerDefaultDisplayBackgroundColorDidChangeNotification
_SOMessageFormatManagerDefaultFontDidChangeNotification
_SOMessageFormatManagerDefaultFontKey
_SOMessageFormatManagerDefaultFontMessageColorDidChangeNotification
_SOMessageFormatManagerDefaultFontMessageColorKey
_SOMessageFormatManagerIncomingSettingsPreferencesKey
_SOMessageFormatManagerLegacyCustomBackgroundColorKey
_SOMessageFormatManagerLegacyCustomFontColorKey
_SOMessageFormatManagerLegacyFontKey
_SOMessageFormatManagerLegacyFontSizeKey
_SOMessageFormatManagerLegacyIncomingSettingsPreferencesKey
_SOMessageFormatManagerLegacyOutgoingSettingsPreferencesKey
_SOMessageFormatManagerLegacyOverridesIncomingBackgroundColorPreferencesKey
_SOMessageFormatManagerLegacyOverridesOutgoingBackgroundColorPreferencesKey
_SOMessageFormatManagerOutgoingSettingsPreferencesKey
_SOMessageFormatManagerOverridesFontDidChangeNotification
_SOMessageFormatManagerOverridesFontMessageColorDidChangeNotification
_SOMessageFormatManagerOverridesFontMessageColorWithDefaultKey
_SOMessageFormatManagerOverridesFontWithDefaultKey
_SOOutgoingMessageTextStylePreferenceKey
_SOTranscriptSettingsDefaultGroupChatSettingsPreferencesKey
_SOTranscriptSettingsDefaultIMChatSettingsPreferencesKey
_SOTranscriptSettingsParticipantDisplayDidChangeNotification
_SOTranscriptSettingsParticipantDisplayKey
_SOTranscriptSettingsTranscriptStyleIDDidChangeNotification
_SOTranscriptSettingsTranscriptStyleIDKey
_ShrinkProportionally
_TranscriptDOMControllerDDElementsChangedNotification
_TranscriptDOMEventHandlerMouseWheelDeltaYKey
_TranscriptDOMEventHandlerMouseWheelNotification
_TranscriptDOMEventHandlerScrollNotification
_TranscriptDOMEventHandlerScrollTypeKey
_TweenRect
__AddSearchElements
__buildDefaultMessageFormatManagers
__colorFromNSColor
__colorFromNSNumber
__colorFromWebString
__translateAppColorToStoredColor
__translateStoredColorToAppColor
_highestBackingScaleFactor
_kABVCardPasteboardType
_kABVCardUIDsPasteboardType
_kABVGroupsUIDsPasteboardType
_kAFVCardPasteboardType
_kAttachedFileURLAttributeName
_kEntityHorizontalEllipsis
_kEntityNonBreakingSpace
_kFZDataDetectorsTagName
_kFZTextSizeKey
_kFileTransferIconLarge
_kFileTransferIconMedium
_kFileTransferIconSmall
_kFormerInlineFileAttribute
_kInlineFileURLAttributeName
_kMapGUIDLoadCompleted
_kMapURLLoadCompleted
_kSecurityScopedFileURLAttributeName
_kShowFileTransferNotification
_kTextEquivalentAttributeName
_sGetEscapedSafeNameOfFontFamilyName
_AVFormatIDKey
_AVLinearPCMBitDepthKey
_AVLinearPCMIsFloatKey
_AVMediaTypeAudio
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFDataCreateMutable
_CFDictionaryAddValue
_CFDictionaryCreateMutable
_CFDictionarySetValue
_CFPreferencesCopyAppValue
_CFRelease
_CFRetain
_CGColorCreate
_CGColorGetConstantColor
_CGColorSpaceCreateDeviceRGB
_CGColorSpaceRelease
_CGContextAddArc
_CGContextAddEllipseInRect
_CGContextBeginTransparencyLayerWithRect
_CGContextClearRect
_CGContextClipToMask
_CGContextConcatCTM
_CGContextEndTransparencyLayer
_CGContextFillEllipseInRect
_CGContextFillPath
_CGContextFillRect
_CGContextGetCTM
_CGContextGetClipBoundingBox
_CGContextMoveToPoint
_CGContextReplacePathWithStrokedPath
_CGContextRestoreGState
_CGContextSaveGState
_CGContextSetBlendMode
_CGContextSetCompositeOperation
_CGContextSetFillColorWithColor
_CGContextSetLineWidth
_CGContextSetShadow
_CGContextSetShouldAntialias
_CGContextSetStrokeColorWithColor
_CGContextStrokeEllipseInRect
_CGContextStrokePath
_CGImageCreateByMatchingToColorSpace
_CGImageCreateCopyWithColorSpace
_CGImageDestinationAddImage
_CGImageDestinationAddImageFromSource
_CGImageDestinationCreateWithData
_CGImageDestinationCreateWithURL
_CGImageDestinationFinalize
_CGImageDestinationSetProperties
_CGImageGetHeight
_CGImageGetWidth
_CGImageRelease
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateWithData
_CGImageSourceCreateWithURL
_CGImageSourceGetType
_CGPathAddArcToPoint
_CGPathCloseSubpath
_CGPathCreateMutable
_CGPathMoveToPoint
_CGRectGetMaxY
_CGRectGetMidX
_CGRectGetMidY
_CGRectGetWidth
_CGRectInset
_CMAudioFormatDescriptionGetStreamBasicDescription
_CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer
_CMSampleBufferGetDuration
_CMSampleBufferGetFormatDescription
_CMSampleBufferGetPresentationTimeStamp
_CMTimeGetSeconds
_DDResultCopyExtractedURL
_DDResultIsPastDate
_DDScannerCopyResultsCheckOverlap
_DDScannerCreateWithType
_DDScannerScanString
_IK_iPhotoBundleIdentifier
_IMAccountLoggedInNotification
_IMAddressAttributeName
_IMAttachmentCharacterString
_IMBackgroundColorAttributeName
_IMBaseWritingDirectionAttributeName
_IMBoldAttributeName
_IMCalendarEventAttributeName
_IMCopyDDScannerResultFromAttributedStringData
_IMCopySafeNameOfFontFamilyName
_IMCreateEscapedAttributeValueFromString
_IMCreateEscapedStringFromString
_IMCreateSuperFormatStringByAttachingMessageParts
_IMDataDetectedAttributeName
_IMEmotePrefixes
_IMFileBookmarkAttributeName
_IMFileTransferGUIDAttributeName
_IMFilenameAttributeName
_IMFontFamilyAttributeName
_IMFontSizeAttributeName
_IMForegroundColorAttributeName
_IMGetComponentsOfColorString
_IMGetInlineImagePath
_IMHandlePictureChangedNotification
_IMHandleRegistrarAddressBookChangedNotification
_IMInlineMediaHeightAttributeName
_IMInlineMediaWidthAttributeName
_IMItalicAttributeName
_IMLinkAttributeName
_IMMessageBackgroundColorAttributeName
_IMMessageForegroundColorAttributeName
_IMMyNameAttributeName
_IMPathsForPlugInsWithExtension
_IMPersonChangedNotification
_IMPhoneNumberAttributeName
_IMSmileyDescriptionAttributeName
_IMSmileyLengthAttributeName
_IMSmileySpeechDescriptionAttributeName
_IMStrikethroughAttributeName
_IMUnderlineAttributeName
_IMUniqueSmileyNumberAttributeName
_IOPSGetTimeRemainingEstimate
_MarcoLogMadrid
_MarcoShouldLogMadridLevel
_NSApp
_NSApplicationDidBecomeActiveNotification
_NSApplicationDidResignActiveNotification
_NSAttachmentAttributeName
_NSBackgroundColorAttributeName
_NSBaselineOffsetAttributeName
_NSBeep
_NSCalibratedRGBColorSpace
_NSCalibratedWhiteColorSpace
_NSClassFromString
_NSDefaultRunLoopMode
_NSDeviceRGBColorSpace
_NSEqualPoints
_NSEqualSizes
_NSEventTrackingRunLoopMode
_NSFileTypeForHFSTypeCode
_NSFilenamesPboardType
_NSFilesPromisePboardType
_NSFontAttributeName
_NSForegroundColorAttributeName
_NSFrameRect
_NSHomeDirectory
_NSImageCompressionFactor
_NSImageCurrentFrame
_NSImageCurrentFrameDuration
_NSImageFrameCount
_NSImageNameEveryone
_NSImageRGBColorTable
_NSInsetRect
_NSIntegralRect
_NSIntersectsRect
_NSLinkAttributeName
_NSLog
_NSModalPanelRunLoopMode
_NSOffsetRect
_NSParagraphStyleAttributeName
_NSRectFill
_NSSearchPathForDirectoriesInDomains
_NSStrikethroughStyleAttributeName
_NSStringFromSize
_NSURLEffectiveIconKey
_NSUnderlineStyleAttributeName
_NSZeroPoint
_NSZeroRect
_NSZeroSize
_OBJC_CLASS_$_ABAddressBook
_OBJC_CLASS_$_ABMonogramFactory
_OBJC_CLASS_$_ABMonogramImageLoading
_OBJC_CLASS_$_ABMonogramOptions
_OBJC_CLASS_$_ABPerson
_OBJC_CLASS_$_ABSearchElement
_OBJC_CLASS_$_AVAsset
_OBJC_CLASS_$_AVAssetImageGenerator
_OBJC_CLASS_$_AVAssetReader
_OBJC_CLASS_$_AVAssetReaderTrackOutput
_OBJC_CLASS_$_AVAudioPlayer
_OBJC_CLASS_$_AVURLAsset
_OBJC_CLASS_$_DOMCSSMediaRule
_OBJC_CLASS_$_DOMCSSPageRule
_OBJC_CLASS_$_DOMCSSStyleRule
_OBJC_CLASS_$_DOMDocument
_OBJC_CLASS_$_DOMElement
_OBJC_CLASS_$_DOMHTMLElement
_OBJC_CLASS_$_DOMMouseEvent
_OBJC_CLASS_$_DOMNode
_OBJC_CLASS_$_IKPictureTakerRecentPicture
_OBJC_CLASS_$_IKPictureTakerRecentPictureRepository
_OBJC_CLASS_$_IKSlideshow
_OBJC_CLASS_$_IMAccount
_OBJC_CLASS_$_IMAccountController
_OBJC_CLASS_$_IMAddressBook
_OBJC_CLASS_$_IMAttachmentMessagePartChatItem
_OBJC_CLASS_$_IMAttributedStringParser
_OBJC_CLASS_$_IMAttributedStringParserContext
_OBJC_CLASS_$_IMAudioMessageChatItem
_OBJC_CLASS_$_IMChatRegistry
_OBJC_CLASS_$_IMDaemonController
_OBJC_CLASS_$_IMDateChatItem
_OBJC_CLASS_$_IMEmoteMessageChatItem
_OBJC_CLASS_$_IMExpirableMessageChatItem
_OBJC_CLASS_$_IMFileManager
_OBJC_CLASS_$_IMFileTransfer
_OBJC_CLASS_$_IMFileTransferCenter
_OBJC_CLASS_$_IMFromSuperParserContext
_OBJC_CLASS_$_IMGroupActionChatItem
_OBJC_CLASS_$_IMGroupTitleChangeChatItem
_OBJC_CLASS_$_IMHandle
_OBJC_CLASS_$_IMLocationShareActionChatItem
_OBJC_CLASS_$_IMMe
_OBJC_CLASS_$_IMMessage
_OBJC_CLASS_$_IMMessageActionChatItem
_OBJC_CLASS_$_IMMessageChatItem
_OBJC_CLASS_$_IMMessagePartChatItem
_OBJC_CLASS_$_IMMessageStatusChatItem
_OBJC_CLASS_$_IMParticipantChangeChatItem
_OBJC_CLASS_$_IMPerson
_OBJC_CLASS_$_IMSenderChatItem
_OBJC_CLASS_$_IMServiceChatItem
_OBJC_CLASS_$_IMServiceImpl
_OBJC_CLASS_$_IMSuperToPlainParserContext
_OBJC_CLASS_$_IMTypingChatItem
_OBJC_CLASS_$_MapRenderingHelper
_OBJC_CLASS_$_NSAffineTransform
_OBJC_CLASS_$_NSAlert
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSBezierPath
_OBJC_CLASS_$_NSBitmapImageRep
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSButton
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCalendar
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSColorSpace
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFileWrapper
_OBJC_CLASS_$_NSFont
_OBJC_CLASS_$_NSFontDescriptor
_OBJC_CLASS_$_NSFontManager
_OBJC_CLASS_$_NSFormatter
_OBJC_CLASS_$_NSGradient
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSImageRep
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableCharacterSet
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSParagraphStyle
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSScreen
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSShadow
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTextAttachment
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLProtocol
_OBJC_CLASS_$_NSURLResponse
_OBJC_CLASS_$_NSUnarchiver
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSWorkspace
_OBJC_CLASS_$_PKPass
_OBJC_CLASS_$_SOFileTransferHelper
_OBJC_CLASS_$_SOMessageHelper
_OBJC_CLASS_$_SOSystemIdleMonitor
_OBJC_CLASS_$_SOTimerCenter
_OBJC_CLASS_$_WebView
_OBJC_EHTYPE_$_NSException
_OBJC_IVAR_$_IMAttributedStringParserContext._inString
_OBJC_IVAR_$_IMSuperToPlainParserContext._plainString
_OBJC_METACLASS_$_IMAttributedStringParserContext
_OBJC_METACLASS_$_IMFileTransfer
_OBJC_METACLASS_$_IMFromSuperParserContext
_OBJC_METACLASS_$_IMHandle
_OBJC_METACLASS_$_IMSuperToPlainParserContext
_OBJC_METACLASS_$_NSFormatter
_OBJC_METACLASS_$_NSImage
_OBJC_METACLASS_$_NSImageRep
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSURLProtocol
_QLThumbnailImageCreate
_SOAnonymizeChatWindow
_SOAnonymizeChatWindowChangedNotification
_SODefaultsChangedKey
_SOHelperDefaultsChangedNotification
_SOIsInternalInstall
_SOMessageOutgoingAttributesKey
_SOMessageOutgoingBackgroundColorKey
_SOMessageOutgoingBackgroundColorPolicy
_SOMessageOutgoingFontColorKey
_SOMessageOutgoingFontKey
_SOShouldShowLoggingInfo
_SOSystemBecameActiveNotification
_SecureRandomUInt
_TemporaryImagePath
_UTTypeCopyPreferredTagWithClass
_WebViewDidChangeSelectionNotification
__Block_object_assign
__Block_object_dispose
__IMAlwaysLog
__IMLog
__IMWarn
__IMWillLog
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSStringHasRightToLeftBaseWritingDirectionAtIndex
__Unwind_Resume
___CFConstantStringClassReference
___bzero
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__dispatch_queue_attr_concurrent
__objc_empty_cache
_ceil
_ceilf
_dispatch_async
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_sync
_dispatch_time
_exit
_floor
_floorf
_kABEmailProperty
_kABFirstNameProperty
_kABLastNameProperty
_kABUpdatedRecords
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCGColorBlack
_kCGColorWhite
_kCGImageDestinationImageMaxPixelSize
_kCGImageDestinationLossyCompressionQuality
_kCGImagePropertyGIFDelayTime
_kCGImagePropertyGIFDictionary
_kCGImagePropertyGIFLoopCount
_kCMTimeZero
_kQLThumbnailOptionIconModeKey
_kUTTagClassFilenameExtension
_kUTTypeGIF
_kUTTypeJPEG
_log10
_log2
_objc_autorelease
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_destroyWeak
_objc_end_catch
_objc_enumerationMutation
_objc_getAssociatedObject
_objc_getProperty
_objc_loadWeakRetained
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setAssociatedObject
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_round
_strlen
dyld_stub_binder
