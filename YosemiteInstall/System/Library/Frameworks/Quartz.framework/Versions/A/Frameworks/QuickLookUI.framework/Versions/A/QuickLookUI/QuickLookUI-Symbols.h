-[NSURL(QLPreviewConvenienceAdditions) previewItemURL]
+[QLPreviewView(QLPreviewItemVirtualNode) _registerVNodeSchemeHandler]
__QLPreviewItemGeneratorCopyThumbnailUsingSchemeHandler
__QLPreviewItemGeneratorCopyPreviewUsingSchemeHandler
__QLPreviewItemGeneratorCopyPreviewUsingSchemeHandlerForURL
+[NSURL(QLPreviewItemVirtualNode) previewItemVirtualNodeURLWithPath:]
-[NSURL(QLPreviewItemVirtualNode) isPreviewItemVirtualNodeURL]
-[QLPreviewSchemeHandler_vnode calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_vnode createImageForMaximumSize:options:]
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke_2
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke_3
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke_4
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke_5
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke_6
___QLPreviewItemGetDefaultOpenButtonInfo_block_invoke_7
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_230
___destroy_helper_block_231
___copy_helper_block_234
___destroy_helper_block_235
___copy_helper_block_239
___destroy_helper_block_240
_QLPreviewItemIsKnownForURL
_QLPreviewItemUpdateLastKnownURL
_QLPreviewItemClearLastKnownURL
-[QLPreviewPanelReserved dealloc]
-[NSWindow(QLPreviewPanelAdditions) _qlControllerCandidateForPreviewPanel:]
_findResponder
-[NSWindow(QLPreviewPanelAdditions) _qlIgnoreWindowForPreviewPanel:]
+[QLPreviewPanel initialize]
+[QLPreviewPanel sharedPreviewPanel]
+[QLPreviewPanel _allowsNontitledResizableWindows]
+[QLPreviewPanel _newPreviewPanelAndController:]
+[QLPreviewPanel sharedPreviewPanelExists]
-[QLPreviewPanel isControlledByApplication]
+[QLPreviewPanel sharedPreviewPanelIsControlledByApplication]
-[QLPreviewPanel initWithContentRect:styleMask:backing:defer:]
-[QLPreviewPanel dealloc]
-[QLPreviewPanel standardWindowButton:]
-[QLPreviewPanel canBecomeKeyWindow]
-[QLPreviewPanel canBecomeMainWindow]
-[QLPreviewPanel shouldIgnorePanelFrameChanges]
-[QLPreviewPanel isOpen]
-[QLPreviewPanel isOpening]
-[QLPreviewPanel isVisible]
-[QLPreviewPanel isOnScreen]
-[QLPreviewPanel setFrame:display:animate:]
-[QLPreviewPanel dragRectForFrameRect:]
-[QLPreviewPanel _setupPanelWindow]
-[QLPreviewPanel _standardFrame]
-[QLPreviewPanel _stopWatchingForMouseDown]
-[QLPreviewPanel _watchForMouseDownWithCallback:]
_stickyMouseDownCallback
-[QLPreviewPanel _scaleEffectForItemFrame:]
-[QLPreviewPanel _scalePopEffectForItemFrame:]
-[QLPreviewPanel _backgroundFocusEffectForScreen:]
-[QLPreviewPanel _subEffectsForFadeWithWindow:transitionWindows:]
-[QLPreviewPanel _currentItemFrame]
-[QLPreviewPanel _currentTransitionImageWithContentRect:]
-[QLPreviewPanel _updateFocusBackgroundWindowWithSpotlight:forScreen:]
-[QLPreviewPanel focusMode]
-[QLPreviewPanel setFocusMode:]
-[QLPreviewPanel setFocusMode:animate:]
___39-[QLPreviewPanel setFocusMode:animate:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPreviewPanel updateFocus]
-[QLPreviewPanel setAutosizesAndCenters:]
-[QLPreviewPanel autosizesAndCenters]
-[QLPreviewPanel setPositionNearPreviewItem:]
-[QLPreviewPanel positionNearPreviewItem]
-[QLPreviewPanel _superMakeKeyAndOrderFront:]
-[QLPreviewPanel _orderFrontAndMakeKey:]
-[QLPreviewPanel makeKeyAndOrderFront:]
-[QLPreviewPanel orderFront:]
-[QLPreviewPanel orderPanelFront]
-[QLPreviewPanel makeKeyAndOrderFrontWithEffect:]
-[QLPreviewPanel openingCompletionBlock]
___40-[QLPreviewPanel openingCompletionBlock]_block_invoke
___copy_helper_block_223
___destroy_helper_block_224
-[QLPreviewPanel _openWithEffect:willOpen:toFullscreen:]
-[QLPreviewPanel openingEffect]
-[QLPreviewPanel setOpeningEffect:]
-[QLPreviewPanel setDefaultOpenCloseEffect:]
-[QLPreviewPanel defaultOpenCloseEffect]
-[QLPreviewPanel performClose:]
-[QLPreviewPanel closePanel]
-[QLPreviewPanel close]
-[QLPreviewPanel beginDeferredClosing]
-[QLPreviewPanel endDeferredClosing]
-[QLPreviewPanel orderOut:]
-[QLPreviewPanel quickLookPreviewItems:]
-[QLPreviewPanel closingCompletionBlock]
___40-[QLPreviewPanel closingCompletionBlock]_block_invoke
___copy_helper_block_273
___destroy_helper_block_274
-[QLPreviewPanel closeWithEffect:canToggle:force:]
-[QLPreviewPanel _closeWithEffect:canToggle:force:]
-[QLPreviewPanel _close:]
-[QLPreviewPanel sendEvent:]
-[QLPreviewPanel selectNextItem]
-[QLPreviewPanel selectPreviousItem]
-[QLPreviewPanel setDataSource:]
-[QLPreviewPanel dataSource]
-[QLPreviewPanel _doReloadDataIfNecessary]
-[QLPreviewPanel reloadData]
-[QLPreviewPanel reloadDataPreservingDisplayState:]
-[QLPreviewPanel refreshCurrentPreviewItem]
-[QLPreviewPanel currentPreviewItemIndex]
-[QLPreviewPanel setCurrentPreviewItemIndex:]
-[QLPreviewPanel itemsToActOn]
-[QLPreviewPanel appURLForOpening]
-[QLPreviewPanel displayState]
-[QLPreviewPanel setDisplayState:]
-[QLPreviewPanel currentPreviewItem]
-[QLPreviewPanel setDelegate:]
-[QLPreviewPanel delegate]
-[QLPreviewPanel sharedPreviewView]
-[QLPreviewPanel setSharedPreviewView:]
-[QLPreviewPanel setCyclesSelection:]
-[QLPreviewPanel cyclesSelection]
-[QLPreviewPanel restoreDisplayBundleToSharedPreviewView:]
-[QLPreviewPanel setShowsAddToiPhotoButton:]
-[QLPreviewPanel showsAddToiPhotoButton]
-[QLPreviewPanel setShowsFullscreenButton:]
-[QLPreviewPanel showsFullscreenButton]
-[QLPreviewPanel setShowsIndexSheetButton:]
-[QLPreviewPanel showsIndexSheetButton]
-[QLPreviewPanel setAutostarts:]
-[QLPreviewPanel autostarts]
-[QLPreviewPanel setPlaysDuringPanelAnimation:]
-[QLPreviewPanel playsDuringPanelAnimation]
-[QLPreviewPanel setDeferredLoading:]
-[QLPreviewPanel deferredLoading]
-[QLPreviewPanel start:]
-[QLPreviewPanel stop:]
-[QLPreviewPanel resizeToFit]
-[QLPreviewPanel setShowsIndexSheet:]
-[QLPreviewPanel showsIndexSheet]
-[QLPreviewPanel setPlaysSlideShow:]
-[QLPreviewPanel playsSlideShow]
-[QLPreviewPanel enterFullScreenMode:withOptions:]
-[QLPreviewPanel exitFullScreenModeWithOptions:]
-[QLPreviewPanel isInFullScreenMode]
-[QLPreviewPanel noItemsTitle]
-[QLPreviewPanel setNoItemsTitle:]
-[QLPreviewPanel loadingTitle]
-[QLPreviewPanel setLoadingTitle:]
-[QLPreviewPanel worksWhenModal]
-[QLPreviewPanel currentController]
-[QLPreviewPanel updateController]
-[QLPreviewPanel _qlControllerCandidateForPreviewPanel:]
-[QLPreviewPanel _qlIgnoreWindowForPreviewPanel:]
-[QLPreviewPanel _qlApplicationDidActivate]
-[QLPreviewPanel _qlFirstAvailableControllerFromWindow:]
-[QLPreviewPanel _qlScheduleControllerUpdate]
-[QLPreviewPanel _qlLinkedWindowDidResign:]
-[QLPreviewPanel _qlLinkedWindowWillClose:]
-[QLPreviewPanel _isRunningInBackgroundApp]
-[QLPreviewPanel panelWindowLevel]
-[QLPreviewPanel setTransient:]
-[QLPreviewPanel isTransient]
-[QLPreviewPanel shouldHideOnDeactivate]
-[QLPreviewPanel _qlLinkWindow:]
-[QLPreviewPanel _qlUnlinkWindow]
-[QLPreviewPanel _qlNewWindowBecameKeyOrMain:]
-[QLPreviewPanel _qlUnsetupController]
-[QLPreviewPanel _qlSetupController]
-[QLPreviewPanel _cleanupPanel]
-[QLPreviewPanel _qlMakeController:linkedWindow:]
-[QLPreviewPanel setMandatoryServer:]
-[QLPreviewPanel mandatoryServer]
-[QLPreviewPanel setForcedContentTypeUTI:]
-[QLPreviewPanel forcedContentTypeUTI]
-[NSWindow(QLPreviewPanelInvisibility) ql_isDesktopWindow]
-[QLPreviewTextOverlayController init]
-[QLPreviewTextOverlayController dealloc]
-[QLPreviewTextOverlayController createOverlay]
-[QLPreviewTextOverlayController removeOverlay]
-[QLPreviewTextOverlayController updateOverlayFrame]
-[QLPreviewTextOverlayController updateAppearance]
-[QLPreviewTextOverlayController hasRoundedCorners]
-[QLPreviewTextOverlayController setShowOverlay:]
-[QLPreviewTextOverlayController appearanceChanged:]
-[QLPreviewTextOverlayController hostView]
-[QLPreviewTextOverlayController setHostView:]
-[QLPreviewTextOverlayController textOverlayField]
-[QLPreviewTextOverlayController setTextOverlayField:]
-[QLPreviewTextOverlayController overlayView]
-[QLPreviewTextOverlayController setOverlayView:]
-[QLPreviewTextOverlayController pathOverlayLayer]
-[QLPreviewTextOverlayController setPathOverlayLayer:]
-[QLPreviewTextOverlayController isDarkMode]
-[QLPreviewTextOverlayController setDarkMode:]
-[QLPreviewPanelManagerReserved dealloc]
-[QLPreviewPanelManager init]
-[QLPreviewPanelManager startControllingPanel:]
-[QLPreviewPanelManager stopControllingPanel:]
-[QLPreviewPanelManager previewItems]
-[QLPreviewPanelManager setPreviewItems:]
-[QLPreviewPanelManager numberOfPreviewItemsInPreviewPanel:]
-[QLPreviewPanelManager previewPanel:previewItemAtIndex:]
-[QLPreviewPanelManager previewPanel:didChangeDisplayStateForPreviewItem:]
-[QLPreviewPanelManager previewPanel:handleEvent:]
-[QLPreviewPanelManager previewPanel:sourceFrameOnScreenForPreviewItem:]
-[QLPreviewPanelManager previewPanel:transitionImageForPreviewItem:contentRect:]
-[QLPreviewPanelManager previewPanel:shouldOpenURL:forPreviewItem:]
-[QLPreviewPanelManager showsAddToiPhotoButton]
-[QLPreviewPanelManager setShowsAddToiPhotoButton:]
-[QLPreviewPanelManager showsFullscreenButton]
-[QLPreviewPanelManager setShowsFullscreenButton:]
-[QLPreviewPanelManager showsIndexSheetButton]
-[QLPreviewPanelManager setShowsIndexSheetButton:]
-[QLPreviewPanelManager setDelegate:]
-[QLPreviewPanelManager delegate]
-[_QLKVOWaiter initWithObject:key:value:]
-[_QLKVOWaiter dealloc]
-[_QLKVOWaiter wait]
-[_QLKVOWaiter waitWithTimeout:]
-[_QLKVOWaiter observeValueForKeyPath:ofObject:change:context:]
-[NSObject(QLKVOAdditions) _ql_waitForKey:toBeEqualTo:]
-[NSObject(QLKVOAdditions) _ql_waitForKey:toBeEqualTo:timeout:]
_QLPreviewFinalStatusFromTransitionStatus
_QLPreviewWaitForStatus
-[QLPanelPreviewView usesLargeIndicator]
-[QLPanelPreviewView shouldUseHardwareCodec]
-[QLPanelPreviewView defaultMouseDown:]
-[QLPanelPreviewView wantsScrollEventsForSwipeTrackingOnAxis:]
-[QLPanelPreviewView _shouldAdaptSizeToScreen]
-[QLPanelPreviewView previewPanelController]
-[QLPanelPreviewView setPreviewPanelController:]
+[QLPreviewPanelController _defaultNoItemsTitle]
-[QLPreviewPanelController _setupInternalViews]
-[QLPreviewPanelController initWithWindow:]
-[QLPreviewPanelController _previewView]
-[QLPreviewPanelController _fullPanelSetupIfNecessary]
-[QLPreviewPanelController dealloc]
-[QLPreviewPanelController setDelegate:]
-[QLPreviewPanelController delegate]
-[QLPreviewPanelController panel]
-[QLPreviewPanelController _usableFrameForScreen:]
-[QLPreviewPanelController _maxSizeFromUsableFrame:]
-[QLPreviewPanelController _shouldUpdateWindowFrame]
-[QLPreviewPanelController _updatePanelFrame:animate:]
-[QLPreviewPanelController _updateOpaqueShape]
-[QLPreviewPanelController _adjustPanelFrameWithAnimation:]
-[QLPreviewPanelController _currentItemScreenForClosing:]
-[QLPreviewPanelController _updateWindowAnchor]
-[QLPreviewPanelController _stopAnchorResetTimer]
-[QLPreviewPanelController _startAnchorResetTimer]
-[QLPreviewPanelController _resetAnchor:]
-[QLPreviewPanelController _magnifyBy:]
-[QLPreviewPanelController _contentFrameForPreviewView:]
-[QLPreviewPanelController _contentFrame]
-[QLPreviewPanelController windowSizeFromContentSize:]
-[QLPreviewPanelController _adjustedPanelFrame:positionNearPreviewItem:]
-[QLPreviewPanelController adjustedPanelFrame:ignoringCurrentFrame:]
-[QLPreviewPanelController previewContentFrameIgnoringIndexSheet:]
-[QLPreviewPanelController previewDocumentFrame]
-[QLPreviewPanelController miniWindowFrameForItemFrame:canZoomFromCenter:]
-[QLPreviewPanelController contentViewFrame]
-[QLPreviewPanelController shouldUseCrossfadingForPreviewItem:]
-[QLPreviewPanelController windowWillUseStandardFrame:defaultFrame:]
-[QLPreviewPanelController setHasCustomSize:]
-[QLPreviewPanelController hasCustomSize]
-[QLPreviewPanelController _refreshLayoutAndContentBlocking:]
-[QLPreviewPanelController refreshCurrentPreviewItem]
-[QLPreviewPanelController _doReloadDataIfNecessary]
-[QLPreviewPanelController _scheduleDoReloadData]
-[QLPreviewPanelController reloadDataPreservingDisplayState:]
-[QLPreviewPanelController reloadData]
-[QLPreviewPanelController reloadDataNowIfNecessary]
-[QLPreviewPanelController cleanupReloadData]
-[QLPreviewPanelController makeSureOfOneReloadData]
-[QLPreviewPanelController countOfPreviewItems]
-[QLPreviewPanelController objectInPreviewItemsAtIndex:]
-[QLPreviewPanelController _itemIndexWithDelta:]
-[QLPreviewPanelController _previewItemAtIndex:]
-[QLPreviewPanelController showItemWithDelta:transition:]
-[QLPreviewPanelController setCurrentPreviewItemIndex:withTransition:blocking:]
-[QLPreviewPanelController _setCurrentPreviewItemIndex:withTransition:blocking:]
-[QLPreviewPanelController _setCurrentPreviewItem:withTransition:blocking:]
-[QLPreviewPanelController _updatePreloadedItems]
-[QLPreviewPanelController _setDisplayState:updatePreviewView:]
-[QLPreviewPanelController setDisplayState:]
-[QLPreviewPanelController displayState]
-[QLPreviewPanelController currentPreviewItem]
-[QLPreviewPanelController displayedPreviewItem]
-[QLPreviewPanelController previewView]
-[QLPreviewPanelController _flushCaches]
-[QLPreviewPanelController _flushCurrentDisplayBundle]
-[QLPreviewPanelController pathWatcher:fileAtURLWasMoved:]
-[QLPreviewPanelController pathWatcher:fileAtURLWasModified:onlyAttributes:]
-[QLPreviewPanelController pathWatcher:fileAtURLWasDeleted:]
-[QLPreviewPanelController _checkInTrash:]
-[QLPreviewPanelController _currentPreviewedURL]
-[QLPreviewPanelController _sharedPreviewViewForPreviewItem:]
-[QLPreviewPanelController _shouldStealSharedPreviewView:forPreviewItem:]
-[QLPreviewPanelController _shouldRestoreSharedPreviewView:withDocument:]
-[QLPreviewPanelController _shouldHaveContinuousTransitionToSharedPreviewView:withDocument:]
-[QLPreviewPanelController restoreDisplayBundleToSharedPreviewView:]
-[QLPreviewPanelController isOpening]
-[QLPreviewPanelController sharedPreviewPanelWillOpen:]
-[QLPreviewPanelController willOpen]
-[QLPreviewPanelController didOpen]
-[QLPreviewPanelController didFinishOpeningTransition]
-[QLPreviewPanelController willStartClosingTransition]
-[QLPreviewPanelController willClose]
-[QLPreviewPanelController didClose]
-[QLPreviewPanelController qlYESValue]
-[QLPreviewPanelController qlNOValue]
-[QLPreviewPanelController setupControlsController:]
-[QLPreviewPanelController _setupControls]
-[QLPreviewPanelController teardownControlsController:]
-[QLPreviewPanelController _teardownControls]
-[QLPreviewPanelController updateControls]
+[QLPreviewPanelController keyPathsForValuesAffectingIsCurrentItemIniPhoto]
-[QLPreviewPanelController isCurrentItemIniPhoto]
+[QLPreviewPanelController keyPathsForValuesAffectingCanAddCurrentItemToiPhoto]
-[QLPreviewPanelController canAddCurrentItemToiPhoto]
+[QLPreviewPanelController keyPathsForValuesAffectingDisplayablePlaying]
-[QLPreviewPanelController displayablePlaying]
+[QLPreviewPanelController keyPathsForValuesAffectingShowPlayControl]
-[QLPreviewPanelController showPlayControl]
+[QLPreviewPanelController keyPathsForValuesAffectingOpeningApplicationIcon]
-[QLPreviewPanelController openingApplicationIcon]
+[QLPreviewPanelController keyPathsForValuesAffectingOpenButtonTitle]
-[QLPreviewPanelController openButtonTitle]
+[QLPreviewPanelController keyPathsForValuesAffectingOpenButtonTightTitle]
-[QLPreviewPanelController openButtonTightTitle]
+[QLPreviewPanelController keyPathsForValuesAffectingOpenButtonMenuProvider]
-[QLPreviewPanelController openButtonMenuProvider]
___50-[QLPreviewPanelController openButtonMenuProvider]_block_invoke
___50-[QLPreviewPanelController openButtonMenuProvider]_block_invoke_2
___50-[QLPreviewPanelController openButtonMenuProvider]_block_invoke_3
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_746
___destroy_helper_block_747
___copy_helper_block_751
___destroy_helper_block_752
+[QLPreviewPanelController keyPathsForValuesAffectingCanOpen]
-[QLPreviewPanelController canOpen]
-[QLPreviewPanelController _resetOpenButton]
-[QLPreviewPanelController _updateOpenButton]
___45-[QLPreviewPanelController _updateOpenButton]_block_invoke
___45-[QLPreviewPanelController _updateOpenButton]_block_invoke_2
___copy_helper_block_764
___destroy_helper_block_765
___copy_helper_block_769
___destroy_helper_block_770
-[QLPreviewPanelController _updateNavigationControls]
-[QLPreviewPanelController _navigationControlsForPreviewView:includingLoadingPreview:]
-[QLPreviewPanelController navigationControlsIncludingLoadingPreview:]
-[QLPreviewPanelController _showNavigationControls:]
-[QLPreviewPanelController _setWidthAndHeightSizableConstraintsForView:toMatchFrame:]
-[QLPreviewPanelController _updatePanelTitle]
-[QLPreviewPanelController _updateURLsToCache]
-[QLPreviewPanelController _updateProtectedCurrentDocumentURL]
-[QLPreviewPanelController _updatePanelButtons]
-[QLPreviewPanelController _setupIndexSheet]
-[QLPreviewPanelController indexSheetStatus]
-[QLPreviewPanelController indexSheetMaxColumns]
-[QLPreviewPanelController indexSheetMaxRows]
-[QLPreviewPanelController indexSheetHasDarkBackground]
-[QLPreviewPanelController indexSheetShowsControls]
-[QLPreviewPanelController indexSheetHostingView]
-[QLPreviewPanelController indexSheetFrame]
-[QLPreviewPanelController copyIndexSheetTransitionImageWithFrame:transitionFrame:]
-[QLPreviewPanelController activateIndexSheetWithAnimation:]
-[QLPreviewPanelController deactivateIndexSheetWithAnimation:]
-[QLPreviewPanelController indexSheet:didHighlightItemAtIndex:]
-[QLPreviewPanelController indexSheet:didClickOnItemAtIndex:]
-[QLPreviewPanelController indexSheetDidClickOnBackground:]
-[QLPreviewPanelController indexSheetWillActivate:]
-[QLPreviewPanelController indexSheetDidActivate:]
-[QLPreviewPanelController indexSheetWillDeactivate:]
-[QLPreviewPanelController indexSheetDidDeactivate:]
-[QLPreviewPanelController indexSheet:titleForPreviewItem:]
-[QLPreviewPanelController indexSheet:keyDown:]
-[QLPreviewPanelController _toggleInlineSlideshow]
-[QLPreviewPanelController startInlineSlideshow]
-[QLPreviewPanelController stopInlineSlideshowAndStopPlaying:]
-[QLPreviewPanelController slideshow]
+[QLPreviewPanelController keyPathsForValuesAffectingInlineSlideshowStatus]
-[QLPreviewPanelController inlineSlideshowStatus]
-[QLPreviewPanelController slideshowGoToNextItem:]
-[QLPreviewPanelController nextSlideshowItem]
+[QLPreviewPanelController keyPathsForValuesAffectingPlaying]
-[QLPreviewPanelController playing]
-[QLPreviewPanelController setPlaying:]
-[QLPreviewPanelController _setupFullscreen]
-[QLPreviewPanelController _fullscreenView]
-[QLPreviewPanelController _fullscreenParentView]
-[QLPreviewPanelController _fullscreenViewFrame]
-[QLPreviewPanelController setupForFullscreen:]
-[QLPreviewPanelController enterFullscreenAndStartSlideshow:]
-[QLPreviewPanelController enterFullscreenWithEffect:frame:fromPanel:startSlideshow:]
-[QLPreviewPanelController exitFullscreen]
-[QLPreviewPanelController closeFullscreenWithEffect:]
+[QLPreviewPanelController keyPathsForValuesAffectingFullscreenStatus]
-[QLPreviewPanelController fullscreenStatus]
-[QLPreviewPanelController fullscreenFrame]
-[QLPreviewPanelController fullscreenController]
-[QLPreviewPanelController close]
-[QLPreviewPanelController previewFeatures]
-[QLPreviewPanelController setPreviewFeatures:]
-[QLPreviewPanelController isFeatureEnabled:]
-[QLPreviewPanelController setFeature:isEnabled:]
-[QLPreviewPanelController _previewPanelFrameDidChange:]
-[QLPreviewPanelController _previewPanelDidBecomeKey:]
-[QLPreviewPanelController _previewPanelDidResignKey:]
-[QLPreviewPanelController _applicationWillDeactivate:]
-[QLPreviewPanelController _applicationDidActivate:]
-[QLPreviewPanelController _isEventInContentView:]
-[QLPreviewPanelController _isEventInResizeHandleView:]
-[QLPreviewPanelController _performUserAction:forEvent:]
-[QLPreviewPanelController _canOverrideUserAction:]
-[QLPreviewPanelController _userActionForEvent:]
-[QLPreviewPanelController _defaultUserActionForEvent:]
-[QLPreviewPanelController _transmogrifyWithEvent:]
___51-[QLPreviewPanelController _transmogrifyWithEvent:]_block_invoke
___copy_helper_block_1094
___destroy_helper_block_1095
-[QLPreviewPanelController worksWhenModal]
-[QLPreviewPanelController handleEvent:]
-[QLPreviewPanelController trackSwipeWithEvent:]
___48-[QLPreviewPanelController trackSwipeWithEvent:]_block_invoke
___copy_helper_block_1130
___destroy_helper_block_1131
___48-[QLPreviewPanelController trackSwipeWithEvent:]_block_invoke1135
___copy_helper_block_1136
___destroy_helper_block_1137
___48-[QLPreviewPanelController trackSwipeWithEvent:]_block_invoke1141
___copy_helper_block_1146
___destroy_helper_block_1147
___48-[QLPreviewPanelController trackSwipeWithEvent:]_block_invoke1151
___copy_helper_block_1152
___destroy_helper_block_1153
-[QLPreviewPanelController swipeWithEvent:]
-[QLPreviewPanelController wantsScrollEventsForSwipeTrackingOnAxis:]
-[QLPreviewPanelController wantsForwardedScrollEventsForAxis:]
-[QLPreviewPanelController scrollWheel:]
-[QLPreviewPanelController magnifyWithEvent:]
-[QLPreviewPanelController _prepareForTransmogrification]
_eventCallback
-[QLPreviewPanelController _cleanupTransmogrification]
-[QLPreviewPanelController defaultMouseDown:]
-[QLPreviewPanelController _updateEventMonitor]
___47-[QLPreviewPanelController _updateEventMonitor]_block_invoke
___copy_helper_block_1198
___destroy_helper_block_1199
+[QLPreviewPanelController keyPathsForValuesAffectingDuration]
-[QLPreviewPanelController duration]
+[QLPreviewPanelController keyPathsForValuesAffectingCurrentTime]
-[QLPreviewPanelController currentTime]
-[QLPreviewPanelController setCurrentTime:]
+[QLPreviewPanelController keyPathsForValuesAffectingShowRemainingTime]
-[QLPreviewPanelController showRemainingTime]
-[QLPreviewPanelController setShowRemainingTime:]
+[QLPreviewPanelController keyPathsForValuesAffectingNeedsVolumeControl]
-[QLPreviewPanelController needsVolumeControl]
+[QLPreviewPanelController keyPathsForValuesAffectingMuted]
-[QLPreviewPanelController muted]
-[QLPreviewPanelController setMuted:]
+[QLPreviewPanelController keyPathsForValuesAffectingVolume]
-[QLPreviewPanelController volume]
-[QLPreviewPanelController setVolume:]
+[QLPreviewPanelController keyPathsForValuesAffectingHidePlayControl]
-[QLPreviewPanelController hidePlayControl]
-[QLPreviewPanelController previewView:gotDisplayBundle:forPreviewItem:]
-[QLPreviewPanelController previewView:willLoadPreviewItem:]
-[QLPreviewPanelController previewView:timedOutLoadingPreviewItem:]
-[QLPreviewPanelController previewView:didLoadPreviewItem:]
-[QLPreviewPanelController previewView:willShowPreviewItem:]
-[QLPreviewPanelController previewView:willShowDisplayable:]
-[QLPreviewPanelController previewView:didShowPreviewItem:]
-[QLPreviewPanelController previewView:didShowDisplayable:]
-[QLPreviewPanelController previewViewSizingUpdated:]
-[QLPreviewPanelController previewViewCustomTitleUpdated:]
-[QLPreviewPanelController _shouldOpenURL:forPreviewItem:]
-[QLPreviewPanelController previewView:doubleClickedOnPreviewItem:]
-[QLPreviewPanelController previewView:shouldOpenURL:]
-[QLPreviewPanelController previewView:openExternalURL:]
-[QLPreviewPanelController shouldManageVisibilityForPreviewView:]
-[QLPreviewPanelController previewView:shouldShowDisplayable:]
-[QLPreviewPanelController shouldStartPlayingPreviewView:]
-[QLPreviewPanelController previewView:documentForPreviewItem:]
-[QLPreviewPanelController previewView:didUseDocumentForPreviewItem:]
-[QLPreviewPanelController previewView:shouldRestoreDocument:]
-[QLPreviewPanelController previewView:restoreDocument:]
-[QLPreviewPanelController previewView:customViewForPreviewItem:]
-[QLPreviewPanelController previewView:opaqueFrameDidUpdate:]
-[QLPreviewPanelController setNoItemsTitle:]
-[QLPreviewPanelController noItemsTitle]
-[QLPreviewPanelController setLoadingTitle:]
-[QLPreviewPanelController loadingTitle]
+[QLPreviewPanelController keyPathsForValuesAffectingEnableSharing]
-[QLPreviewPanelController _sharingPickerForItems:]
-[QLPreviewPanelController _shareItems]
-[QLPreviewPanelController enableSharing]
-[QLPreviewPanelController shareFromButton:]
-[QLPreviewPanelController sharingServicePicker:delegateForSharingService:]
-[QLPreviewPanelController sharingService:sourceFrameOnScreenForShareItem:]
-[QLPreviewPanelController sharingService:transitionImageForShareItem:contentRect:]
-[QLPreviewPanelController sharingService:sourceWindowForShareItems:sharingContentScope:]
-[QLPreviewPanelController sharingService:willShareItems:]
-[QLPreviewPanelController sharingService:didFailToShareItems:error:]
-[QLPreviewPanelController sharingService:didShareItems:]
-[QLPreviewPanelController addDocumentWithURLToIPhoto:commit:]
-[QLPreviewPanelController commitAllAdditionsToIPhoto]
-[QLPreviewPanelController _isDocumentAddedToIPhoto:]
+[QLPreviewPanelController keyPathsForValuesAffectingCanShowPreviousItem]
-[QLPreviewPanelController canShowPreviousItem]
-[QLPreviewPanelController showPreviousItem:]
+[QLPreviewPanelController keyPathsForValuesAffectingCanShowNextItem]
-[QLPreviewPanelController canShowNextItem]
-[QLPreviewPanelController showNextItem:]
-[QLPreviewPanelController play:]
-[QLPreviewPanelController pause:]
-[QLPreviewPanelController playPause:]
-[QLPreviewPanelController switchToIndexSheet:]
-[QLPreviewPanelController enterFullscreen:]
-[QLPreviewPanelController slideshow:]
-[QLPreviewPanelController fitToScreen:]
-[QLPreviewPanelController zoom:]
-[QLPreviewPanelController actualSize:]
-[QLPreviewPanelController exitFullscreen:]
-[QLPreviewPanelController closeFullscreen:]
-[QLPreviewPanelController addToIPhoto:]
-[QLPreviewPanelController start:]
-[QLPreviewPanelController stop:]
-[QLPreviewPanelController open:]
-[QLPreviewPanelController share:]
-[QLPreviewPanelController observeValueForKeyPath:ofObject:change:context:]
-[QLPreviewPanelController setMandatoryServer:]
-[QLPreviewPanelController mandatoryServer]
-[QLPreviewPanelController setForcedContentTypeUTI:]
-[QLPreviewPanelController forcedContentTypeUTI]
-[QLPreviewPanelController automaticallyManageVisibility]
-[QLPreviewPanelController setAutomaticallyManageVisibility:]
-[QLPreviewPanelController sharedPreviewView]
-[QLPreviewPanelController setSharedPreviewView:]
-[QLPreviewPanelController indexSheetController]
-[QLPreviewPanelController fakePlaying]
-[QLPreviewPanelController setFakePlaying:]
-[QLPreviewPanelController hasMultipleItems]
-[QLPreviewPanelController setHasMultipleItems:]
-[QLPreviewPanelController currentPreviewItemIndex]
-[QLPreviewPanelController setCurrentPreviewItemIndex:]
-[QLPreviewPanelController openingApplicationInfo]
-[QLPreviewPanelController setOpeningApplicationInfo:]
-[QLPreviewSlideshow init]
-[QLPreviewSlideshow dealloc]
-[QLPreviewSlideshow setRunning:]
+[QLPreviewSlideshow keyPathsForValuesAffectingRunning]
-[QLPreviewSlideshow running]
-[QLPreviewSlideshow _stopTimer]
-[QLPreviewSlideshow _startSlideshow]
-[QLPreviewSlideshow _stopSlideshow]
-[QLPreviewSlideshow status]
-[QLPreviewSlideshow _slideshowGoToNextItem:]
-[QLPreviewSlideshow _prepareSlideshowForNextItem]
-[QLPreviewSlideshow _updateSlideshow]
-[QLPreviewSlideshow _slideshowItemPlayedToTheEnd]
-[QLPreviewSlideshow observeValueForKeyPath:ofObject:change:context:]
-[QLPreviewSlideshow previewView]
-[QLPreviewSlideshow setPreviewView:]
-[QLPreviewSlideshow staticDuration]
-[QLPreviewSlideshow setStaticDuration:]
-[QLPreviewSlideshow delegate]
-[QLPreviewSlideshow setDelegate:]
-[QLFullscreenControlsPanel backingScaleFactor]
-[QLFullscreenControlsPanel worksWhenModal]
-[QLFullscreenControlsPanel _qlControllerCandidateForPreviewPanel:]
-[QLFullscreenControlsPanel _qlIgnoreWindowForPreviewPanel:]
-[QLFullscreenControlsPanel animationResizeTime:]
-[QLFullscreenControlsPanel accessibilityIsIgnored]
-[QLFullscreenControlsPanel accessibilityParentAttribute]
-[QLFullscreenControlsPanel fullscreenController]
-[QLFullscreenControlsPanel setFullscreenController:]
-[QLFullscreenPageControlWindow worksWhenModal]
-[QLFullscreenPageControlWindow _qlControllerCandidateForPreviewPanel:]
-[QLFullscreenPageControlWindow _qlIgnoreWindowForPreviewPanel:]
-[QLFullscreenPageControlWindow animationResizeTime:]
-[QLFullscreenPageControlWindow accessibilityIsIgnored]
-[QLFullscreenPageControlWindow canBecomeKeyWindow]
-[QLFullscreenPageControlWindow accessibilityParentAttribute]
-[QLFullscreenPageControlWindow sendEvent:]
-[QLFullscreenPageControlWindow fullscreenController]
-[QLFullscreenPageControlWindow setFullscreenController:]
-[QLFullscreenWindow _qlControllerCandidateForPreviewPanel:]
-[QLFullscreenWindow _qlIgnoreWindowForPreviewPanel:]
-[QLFullscreenWindow sendEvent:]
-[QLFullscreenWindow swipeWithEvent:]
-[QLFullscreenWindow scrollWheel:]
-[QLFullscreenWindow magnifyWithEvent:]
-[QLFullscreenWindow wantsScrollEventsForSwipeTrackingOnAxis:]
-[QLFullscreenWindow wantsForwardedScrollEventsForAxis:]
-[QLFullscreenWindow worksWhenModal]
-[QLFullscreenWindow canBecomeKeyWindow]
-[QLFullscreenWindow accessibilityAttributeValue:]
-[QLFullscreenWindow fullscreenController]
-[QLFullscreenWindow setFullscreenController:]
-[QLBackgroundFullscreenWindow canBecomeKeyWindow]
-[QLFullscreenController init]
-[QLFullscreenController dealloc]
-[QLFullscreenController _setupControls]
-[QLFullscreenController _updateControls]
-[QLFullscreenController _newFullscreenWindowWithFrame:]
-[QLFullscreenController _newBackgroundFullscreenWindowWithFrame:]
-[QLFullscreenController _moveFullscreenViewToView:frame:showControls:fitToScreen:coalesceFlushes:]
-[QLFullscreenController _moveFullscreenViewToView:]
-[QLFullscreenController _scaledFrameForWindowFrame:withFrame:matchingFrame:scalable:]
-[QLFullscreenController _fullscreenWindowFrameFromScreen:]
-[QLFullscreenController _scaleEffectForItemFrame:fullscreenFrame:withPanel:transitionWindows:]
-[QLFullscreenController enterFullscreenForView:withEffect:frame:fromPanel:startSlideshow:]
___91-[QLFullscreenController enterFullscreenForView:withEffect:frame:fromPanel:startSlideshow:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___91-[QLFullscreenController enterFullscreenForView:withEffect:frame:fromPanel:startSlideshow:]_block_invoke286
___copy_helper_block_287
___destroy_helper_block_288
-[QLFullscreenController exitFullscreenWithEffect:frame:toPanel:]
___65-[QLFullscreenController exitFullscreenWithEffect:frame:toPanel:]_block_invoke
___copy_helper_block_326
___destroy_helper_block_327
___65-[QLFullscreenController exitFullscreenWithEffect:frame:toPanel:]_block_invoke332
___copy_helper_block_333
___destroy_helper_block_334
-[QLFullscreenController _newWindowWillAppear:]
-[QLFullscreenController _enteredFullscreen]
-[QLFullscreenController _exitedFullscreen]
-[QLFullscreenController _disableDisplaySleep]
-[QLFullscreenController _enableDisplaySleep]
-[QLFullscreenController _pauseDisableDisplaySleep]
-[QLFullscreenController _unpauseDisableDisplaySleep]
-[QLFullscreenController setHasViewControls:]
-[QLFullscreenController hasViewControls]
-[QLFullscreenController _stopControlsFade]
-[QLFullscreenController _showControlsPanel]
-[QLFullscreenController _startListeningToMouseMovement]
-[QLFullscreenController _stopListeningToMouseMovement]
-[QLFullscreenController _scheduleHideControlsPanel]
-[QLFullscreenController _hideControlsPanel]
-[QLFullscreenController scrollWheel:]
-[QLFullscreenController mouseMoved:]
-[QLFullscreenController flagsChanged:]
-[QLFullscreenController mouseEntered:]
-[QLFullscreenController mouseExited:]
-[QLFullscreenController fadeControlsPanel:]
___44-[QLFullscreenController fadeControlsPanel:]_block_invoke
___copy_helper_block_499
___destroy_helper_block_500
-[QLFullscreenController updateControlsPanelWithWidth:animate:keepCentered:]
-[QLFullscreenController setShowControls:]
-[QLFullscreenController showControls]
-[QLFullscreenController controlsController:didLayoutWithWidth:oldWidth:]
-[QLFullscreenController _setActivatePageNavigator:]
-[QLFullscreenController _setShowPageNavigator:]
___48-[QLFullscreenController _setShowPageNavigator:]_block_invoke
___copy_helper_block_532
___destroy_helper_block_533
-[QLFullscreenController updateNavigationControls]
-[QLFullscreenController observeValueForKeyPath:ofObject:change:context:]
-[QLFullscreenController setPreviewOpacity:]
-[QLFullscreenController previewOpacity]
-[QLFullscreenController indexSheetMaxColumns]
-[QLFullscreenController indexSheetMaxRows]
-[QLFullscreenController indexSheetHasDarkBackground]
-[QLFullscreenController indexSheetShowsControls]
-[QLFullscreenController indexSheetHostingView]
-[QLFullscreenController indexSheetFrame]
-[QLFullscreenController copyIndexSheetTransitionImageWithFrame:transitionFrame:]
-[QLFullscreenController indexSheetWillActivate:]
-[QLFullscreenController indexSheetDidActivate:]
-[QLFullscreenController indexSheetWillDeactivate:]
-[QLFullscreenController indexSheetDidDeactivate:]
-[QLFullscreenController respondsToSelector:]
-[QLFullscreenController forwardingTargetForSelector:]
-[QLFullscreenController _setFitToScreen:animate:]
___50-[QLFullscreenController _setFitToScreen:animate:]_block_invoke
___copy_helper_block_572
___destroy_helper_block_573
-[QLFullscreenController setFitToScreen:]
-[QLFullscreenController fitToScreen]
-[QLFullscreenController worksWhenModal]
-[QLFullscreenController _accessibilityControls]
-[QLFullscreenController panelController]
-[QLFullscreenController setPanelController:]
-[QLFullscreenController status]
-[QLFullscreenController setStatus:]
-[QLFullscreenController fullscreenWindow]
-[QLFullscreenController controlsCenterPosition]
-[QLFullscreenController setControlsCenterPosition:]
-[QLFullscreenController controlsOrigin]
-[QLFullscreenController setControlsOrigin:]
-[QLGradientLayer dealloc]
-[QLGradientLayer drawInContext:]
-[QLGradientLayer middleGradientColor]
-[QLGradientLayer setMiddleGradientColor:]
-[QLGradientLayer borderGradientColor]
-[QLGradientLayer setBorderGradientColor:]
-[QLIndexSheetTextLayer containsPoint:]
-[QLIndexSheetThumbnailLayer initWithPreviewItem:]
-[QLIndexSheetThumbnailLayer dealloc]
-[QLIndexSheetThumbnailLayer setPreviewItem:]
-[QLIndexSheetThumbnailLayer previewItem]
-[QLIndexSheetThumbnailLayer hasThumbnail]
-[QLIndexSheetThumbnailLayer setImageContents:]
-[QLIndexSheetThumbnailLayer imageContents]
-[QLIndexSheetThumbnailLayer updateThumbnail]
___45-[QLIndexSheetThumbnailLayer updateThumbnail]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLIndexSheetThumbnailLayer createImageForMaximumSize:options:]
-[QLIndexSheetThumbnailLayer discardThumbnail]
-[QLIndexSheetThumbnailLayer thumbnail:computedImage:]
-[QLIndexSheetThumbnailLayer thumbnailingDone:]
___47-[QLIndexSheetThumbnailLayer thumbnailingDone:]_block_invoke
___copy_helper_block_103
___destroy_helper_block_104
-[QLIndexSheetThumbnailLayer updateBorder:]
-[QLIndexSheetThumbnailLayer updateFrameWithCellFrame:]
-[QLIndexSheetThumbnailLayer thumbnailFrame]
-[QLIndexSheetThumbnailLayer actionForKey:]
-[QLIndexSheetThumbnailLayer removeFromSuperlayer]
-[QLIndexSheetThumbnailLayer _isSelected]
-[QLIndexSheetThumbnailLayer accessibilityIsIgnored]
-[QLIndexSheetThumbnailLayer accessibilityAttributeNames]
-[QLIndexSheetThumbnailLayer accessibilityIsAttributeSettable:]
-[QLIndexSheetThumbnailLayer accessibilitySetValue:forAttribute:]
-[QLIndexSheetThumbnailLayer accessibilityHitTest:]
-[QLIndexSheetThumbnailLayer accessibilityChildren]
-[QLIndexSheetThumbnailLayer accessibilityAttributeValue:]
-[QLIndexSheetThumbnailLayer accessibilityActionNames]
-[QLIndexSheetThumbnailLayer accessibilityActionDescription:]
-[QLIndexSheetThumbnailLayer accessibilityPerformAction:]
-[QLIndexSheetThumbnailLayer thumbnailMaxSize]
-[QLIndexSheetThumbnailLayer thumbnailSize]
-[QLIndexSheetView initWithFrame:]
-[QLIndexSheetView dealloc]
-[QLIndexSheetView _CAViewFlags]
-[QLIndexSheetView mouseDownCanMoveWindow]
-[QLIndexSheetView hitTest:]
-[QLIndexSheetView _setupLayers]
-[QLIndexSheetView setPreviewItems:withVisibleIndex:]
-[QLIndexSheetView activateForItemAtIndex:usingTransitionLayer:atFrame:]
___72-[QLIndexSheetView activateForItemAtIndex:usingTransitionLayer:atFrame:]_block_invoke
___copy_helper_block_315
___destroy_helper_block_316
-[QLIndexSheetView deactivateForItemAtIndex:usingTransitionLayer:atFrame:]
-[QLIndexSheetView _selectDocumentAtIndex:]
-[QLIndexSheetView _animationDuration]
-[QLIndexSheetView _startTransitionWithItemAtIndex:usingTransitionLayer:atFrame:]
___81-[QLIndexSheetView _startTransitionWithItemAtIndex:usingTransitionLayer:atFrame:]_block_invoke
___81-[QLIndexSheetView _startTransitionWithItemAtIndex:usingTransitionLayer:atFrame:]_block_invoke_2
___copy_helper_block_357
___destroy_helper_block_358
___copy_helper_block_390
___destroy_helper_block_391
-[QLIndexSheetView _endTransitionWithLayer:]
-[QLIndexSheetView animationDidStop:finished:]
-[QLIndexSheetView animationDuration]
-[QLIndexSheetView indexSheetFrame]
-[QLIndexSheetView setIndexSheetFrame:]
-[QLIndexSheetView _updateInternalLayerFrames]
-[QLIndexSheetView _updateLayoutForResize]
-[QLIndexSheetView _thumbnailLayerAtIndex:]
-[QLIndexSheetView _indexOfDocumentAtRow:column:]
-[QLIndexSheetView _numberOfVisibleRows]
-[QLIndexSheetView _visibleRows]
-[QLIndexSheetView _isRowVisible:]
-[QLIndexSheetView _verticalIntercellSpace]
-[QLIndexSheetView _horizontalIntercellSpace]
-[QLIndexSheetView _topMargin]
-[QLIndexSheetView _bottomMargin]
-[QLIndexSheetView _sideMargin]
-[QLIndexSheetView _layoutThumbnailLayers]
-[QLIndexSheetView makeItemAtIndexVisible:]
-[QLIndexSheetView frameOfDocumentAtIndex:]
-[QLIndexSheetView actionForLayer:forKey:]
-[QLIndexSheetView _maxCachedThumbnails]
-[QLIndexSheetView _updateThumbnailLayers]
-[QLIndexSheetView _updateVisibleLayers]
-[QLIndexSheetView _updateInvisibleLayers]
-[QLIndexSheetView _updateThumbnails]
-[QLIndexSheetView _selectDocumentFromLayer:]
-[QLIndexSheetView _thumnailDidUpdate:]
-[QLIndexSheetView hasDarkBackground]
-[QLIndexSheetView setHasDarkBackground:]
-[QLIndexSheetView thumbnailPlaceholderImage]
___45-[QLIndexSheetView thumbnailPlaceholderImage]_block_invoke
___copy_helper_block_512
___destroy_helper_block_513
-[QLIndexSheetView titleForThumbnailLayer:]
-[QLIndexSheetView _setupOverlayLayer]
-[QLIndexSheetView _setHighlightedLayer:animate:update:]
-[QLIndexSheetView _highlightedLayer]
-[QLIndexSheetView highlightedItemIndex]
-[QLIndexSheetView _maxScrollValue]
-[QLIndexSheetView _setScrollValue:animate:]
___44-[QLIndexSheetView _setScrollValue:animate:]_block_invoke
___copy_helper_block_539
___destroy_helper_block_540
+[QLIndexSheetView automaticallyNotifiesObserversOfVerticalScrollValue]
-[QLIndexSheetView setVerticalScrollValue:]
-[QLIndexSheetView verticalScrollValue]
-[QLIndexSheetView verticalKnobProportion]
-[QLIndexSheetView _snapToTopRow]
-[QLIndexSheetView _setTopRow:animate:]
-[QLIndexSheetView _scrollRowToVisible:animate:]
-[QLIndexSheetView _updateScrollWithAnimation:]
-[QLIndexSheetView _goUp:]
-[QLIndexSheetView _goDown:]
-[QLIndexSheetView goToPreviousPage:]
-[QLIndexSheetView goToNextPage:]
-[QLIndexSheetView canGoToNextPage]
-[QLIndexSheetView canGoToPreviousPage]
-[QLIndexSheetView hasMultiplePages]
-[QLIndexSheetView scrollController:pageScrollPercentageForScroller:]
-[QLIndexSheetView scrollController:scrollerDidEndTracking:]
-[QLIndexSheetView _thumbnailLayerHitTest:]
-[QLIndexSheetView _updateRolloverAtPoint:]
-[QLIndexSheetView _updateRollover]
-[QLIndexSheetView drawDrawingLayer:inContext:]
-[QLIndexSheetView mouseDown:]
-[QLIndexSheetView mouseUp:]
-[QLIndexSheetView mouseMoved:]
-[QLIndexSheetView keyDown:]
-[QLIndexSheetView scrollWheel:]
-[QLIndexSheetView viewWillStartLiveResize]
-[QLIndexSheetView viewDidEndLiveResize]
-[QLIndexSheetView resizeWithOldSuperviewSize:]
-[QLIndexSheetView isOpaque]
-[QLIndexSheetView viewDidMoveToWindow]
-[QLIndexSheetView viewDidMoveToSuperview]
-[QLIndexSheetView imageForPreviewItemURL:]
-[QLIndexSheetView frameForPreviewItemURL:]
-[QLIndexSheetView accessibilityIsIgnored]
-[QLIndexSheetView accessibilityAttributeNames]
-[QLIndexSheetView accessibilityAttributeValue:]
-[QLIndexSheetView accessibilityHitTest:]
-[QLIndexSheetView accessibilityFocusedUIElement]
-[QLIndexSheetView delegate]
-[QLIndexSheetView setDelegate:]
-[QLIndexSheetView maxRows]
-[QLIndexSheetView setMaxRows:]
-[QLIndexSheetView maxColumns]
-[QLIndexSheetView setMaxColumns:]
-[QLIndexSheetView status]
-[QLIndexSheetView setStatus:]
__QLDebugSetLayerColor
-[QLSwipeAnimation prepare]
-[QLSwipeAnimation setTargetFrame:]
-[QLSwipeAnimation targetFrame]
-[QLSwipeAnimation setClipFrame:]
-[QLSwipeAnimation clipFrame]
-[QLSwipeAnimation setCurrentProgress:]
-[QLSwipeAnimation currentValue]
-[QLSwipeAnimation window]
-[QLSwipeAnimation setWindow:]
-[QLPreviewContainerView _CAViewFlags]
-[QLPreviewContainerView _desiredLayerSizeMeritsTiledBackingLayer:]
-[QLPreviewContainerView resizeSubviewsWithOldSize:]
-[QLPreviewContainerView actionForLayer:forKey:]
-[QLPreviewContainerView accessibilityIsIgnored]
-[QLPreviewContainerView accessibilityAttributeNames]
-[QLPreviewContainerView accessibilityRoleAttribute]
-[QLPreviewContainerView accessibilityDescriptionAttribute]
-[QLPreviewContainerView accessibilityValueAttribute]
-[QLPreviewContainerView accessibilityMinValueAttribute]
-[QLPreviewContainerView accessibilityMaxValueAttribute]
-[QLPreviewContainerView accessibilityEnabledAttribute]
-[QLPreviewContainerView accessibilityIsAttributeSettable:]
-[QLPreviewContainerView previewView]
-[QLPreviewContainerView setPreviewView:]
-[QLPreviewContainerView updatePreviewSize]
-[QLPreviewContainerView setUpdatePreviewSize:]
+[QLPreviewView _setupDiskWatch]
__diskEjectApproval
__unmountApproval
+[QLPreviewView initialize]
+[QLPreviewView automaticallyNotifiesObserversForKey:]
+[QLPreviewView timeoutDateFromNow]
+[QLPreviewView defaultSupportedDisplayBundleIDsForMode:]
+[QLPreviewView supportedContentTypesForMode:]
-[QLPreviewView emptyDisplayable]
-[QLPreviewView setEmptyDisplayable:]
-[QLPreviewView genericDisplayable]
-[QLPreviewView setGenericDisplayable:]
-[QLPreviewView supportedDisplayBundleIDs]
-[QLPreviewView setSupportedDisplayBundleIDs:]
-[QLPreviewView delegate]
-[QLPreviewView setDelegate:]
-[QLPreviewView automaticallyMakePreviewFirstResponder]
-[QLPreviewView setAutomaticallyMakePreviewFirstResponder:]
-[QLPreviewView autostarts]
-[QLPreviewView setAutostarts:]
-[QLPreviewView showRemainingTime]
-[QLPreviewView setShowRemainingTime:]
-[QLPreviewView allowLoadingOfUnsupportedDisplayBundleIDs]
-[QLPreviewView setAllowLoadingOfUnsupportedDisplayBundleIDs:]
-[QLPreviewView doubleClickModifierFlags]
-[QLPreviewView setDoubleClickModifierFlags:]
-[QLPreviewView _setupLayerIfNeeded]
-[QLPreviewView _commonInitWithStyle:]
-[QLPreviewView initWithFrame:style:]
-[QLPreviewView initWithFrame:]
-[QLPreviewView dealloc]
-[QLPreviewView _CAViewFlags]
-[QLPreviewView updateConstraints]
-[QLPreviewView _currentPreviewedURL]
-[QLPreviewView previewItem]
-[QLPreviewView setPreviewItem:]
-[QLPreviewView setPreviewItem:blockingUntilLoading:]
-[QLPreviewView setPreviewItem:blockingUntilLoading:timeoutDate:]
-[QLPreviewView setPreviewItem:blockingUntilLoading:timeoutDate:transition:]
-[QLPreviewView refreshPreviewItemWithTimeoutDate:]
-[QLPreviewView refreshPreviewItem]
+[QLPreviewView keyPathsForValuesAffectingDisplayedPreviewItem]
-[QLPreviewView displayedPreviewItem]
-[QLPreviewView shouldRemoteDisplayBundleID:]
-[QLPreviewView shouldAcceptDisplayBundleID:]
-[QLPreviewView canAcceptDocument:]
-[QLPreviewView _actualDisplayBundleID]
-[QLPreviewView _filteredDisplayBundleID]
-[QLPreviewView _displayedBundleID]
+[QLPreviewView keyPathsForValuesAffectingDisplayBundleID]
-[QLPreviewView displayBundleID]
-[QLPreviewView canBeResized]
-[QLPreviewView isNativeFileType]
-[QLPreviewView customDisplayName]
-[QLPreviewView titleForPreviewItem:options:]
-[QLPreviewView shouldPreserveDisplayStateWhenNavigating]
-[QLPreviewView isDisplayingError]
-[QLPreviewView inputFocusType]
-[QLPreviewView giveInputFocus]
-[QLPreviewView isLoaded]
-[QLPreviewView isGeneric]
-[QLPreviewView _startLoadingPreviewItem:timeoutDate:]
-[QLPreviewView _startLoadingDocumentWithTimeoutDate:]
-[QLPreviewView _endLoadingDocument:]
-[QLPreviewView _startTimeOut]
-[QLPreviewView _stopTimeOut]
-[QLPreviewView _timedOut]
-[QLPreviewView forceTimeoutForDocument:]
-[QLPreviewView refreshDisplayableForDocument:]
-[QLPreviewView previewDocument:gotDisplayBundle:]
-[QLPreviewView previewDocumentDidLoad:]
-[QLPreviewView previewDocumentDidChangeDisplayable:]
-[QLPreviewView isRemote]
-[QLPreviewView isHostedInWindowServer]
-[QLPreviewView isWindowKey]
-[QLPreviewView flavor]
-[QLPreviewView setVisualMargins:]
-[QLPreviewView visualMargins]
-[QLPreviewView shouldUseHardwareCodec]
-[QLPreviewView currentURL]
-[QLPreviewView backingScaleFactor]
-[QLPreviewView globalOrigin]
-[QLPreviewView screen]
-[QLPreviewView setCacheSize:]
-[QLPreviewView cacheSize]
-[QLPreviewView hasCachedDocumentForItem:]
-[QLPreviewView flushCache]
-[QLPreviewView cacheManager]
-[QLPreviewView setCacheManager:]
-[QLPreviewView canRestoreDocument:]
-[QLPreviewView canStealDocumentFromPreviewView:]
-[QLPreviewView stealDocument]
-[QLPreviewView restoreStolenDocument:]
-[QLPreviewView displayBundleWithID:forPreviewItem:]
-[QLPreviewView contentView]
-[QLPreviewView _updateOverlayBorder]
-[QLPreviewView _updateOpaqueShape]
-[QLPreviewView _updateBackingScaleFactor]
-[QLPreviewView _setPreviewItem:]
-[QLPreviewView setDocument:]
-[QLPreviewView _setDocument:canDelayDisplay:]
-[QLPreviewView document]
-[QLPreviewView _canChangeDisplayedDocument]
-[QLPreviewView _setDisplayedDocument:transition:]
-[QLPreviewView displayedDocument]
-[QLPreviewView _updateDisplayedDocumentWithDelayedDisplay:]
-[QLPreviewView _prepareToRecycleDocument:willRestore:]
-[QLPreviewView _recycleDocument:restore:]
-[QLPreviewView _updateDisplayableWithTransition:]
-[QLPreviewView _addHiddenContentViewForLoading:]
-[QLPreviewView _contentIsSharedBetweenOldDisplayable:andNewDisplayable:]
-[QLPreviewView _setDisplayable:transition:]
-[QLPreviewView hasValidPreview]
-[QLPreviewView shouldShowInlinePreviewControls]
-[QLPreviewView shouldShowInlinePreviewContent]
-[QLPreviewView _shouldShowDisplayable:forDisplayBundle:]
-[QLPreviewView _displayable]
-[QLPreviewView displayableContainer]
+[QLPreviewView keyPathsForValuesAffectingDisplayedDisplayBundle]
-[QLPreviewView displayedDisplayBundle]
-[QLPreviewView sizingDisplayBundle]
-[QLPreviewView setLoadingDisplayable:]
-[QLPreviewView loadingDisplayable]
-[QLPreviewView loadingLayerForPreview:displayBundle:]
-[QLPreviewView hideLoadingSpinner]
-[QLPreviewView setHideLoadingSpinner:]
-[QLPreviewView updateDisplayedDocumentWithTransition:]
-[QLPreviewView activate]
-[QLPreviewView deactivate]
-[QLPreviewView diskWillEject:]
-[QLPreviewView globalFrameDidChange:]
-[QLPreviewView windowKeyDidChange:]
-[QLPreviewView observeValueForKeyPath:ofObject:change:context:]
-[QLPreviewView _shouldManageVisibilityOnlyIfVisible:]
-[QLPreviewView visible]
-[QLPreviewView setVisible:]
-[QLPreviewView _isVisible]
-[QLPreviewView _canChangeVisibilityTo:]
-[QLPreviewView willShow]
-[QLPreviewView _willShowDisplayable:]
-[QLPreviewView didShow]
-[QLPreviewView _didShowDisplayable:]
-[QLPreviewView willHide]
-[QLPreviewView _willHideDisplayable:]
-[QLPreviewView didHide]
-[QLPreviewView _didHideDisplayable:]
-[QLPreviewView willOpen]
-[QLPreviewView didOpen]
-[QLPreviewView emptyView]
-[QLPreviewView setEmptyView:]
-[QLPreviewView genericView]
-[QLPreviewView setGenericView:]
-[QLPreviewView loadingView]
-[QLPreviewView setLoadingView:]
-[QLPreviewView usesLargeIndicator]
+[QLPreviewView keyPathsForValuesAffectingDisplayState]
-[QLPreviewView hasHorizontalScroller]
+[QLPreviewView keyPathsForValuesAffectingHasHorizontalScroller]
-[QLPreviewView setDisplayState:]
-[QLPreviewView displayState]
-[QLPreviewView shouldCloseWithWindow]
-[QLPreviewView setShouldCloseWithWindow:]
-[QLPreviewView close]
-[QLPreviewView mode]
-[QLPreviewView setMode:reloadItemIfNeeded:]
-[QLPreviewView setMode:]
-[QLPreviewView enableRemotePreviews]
-[QLPreviewView setEnableRemotePreviews:]
-[QLPreviewView fullLayers]
-[QLPreviewView setFullLayers:]
-[QLPreviewView hasControls]
-[QLPreviewView setShowControls:]
-[QLPreviewView showControls]
+[QLPreviewView keyPathsForValuesAffectingNeedsVolumeControl]
-[QLPreviewView needsVolumeControl]
+[QLPreviewView keyPathsForValuesAffectingMuted]
-[QLPreviewView muted]
-[QLPreviewView setMuted:]
+[QLPreviewView keyPathsForValuesAffectingVolume]
-[QLPreviewView volume]
-[QLPreviewView setVolume:]
+[QLPreviewView keyPathsForValuesAffectingNeedsPlayControl]
-[QLPreviewView _needsPlayControlForDisplayBundle:]
-[QLPreviewView needsPlayControl]
-[QLPreviewView hidePlayControl]
+[QLPreviewView keyPathsForValuesAffectingNeedsTimeControl]
-[QLPreviewView _needsTimeControlForDisplayBundle:]
-[QLPreviewView needsTimeControl]
+[QLPreviewView keyPathsForValuesAffectingPlaying]
-[QLPreviewView playing]
-[QLPreviewView setPlaying:]
+[QLPreviewView keyPathsForValuesAffectingDuration]
-[QLPreviewView duration]
+[QLPreviewView keyPathsForValuesAffectingCurrentTime]
-[QLPreviewView currentTime]
-[QLPreviewView setCurrentTime:]
+[QLPreviewView keyPathsForValuesAffectingPlayedToTheEnd]
-[QLPreviewView playedToTheEnd]
+[QLPreviewView keyPathsForValuesAffectingNeedsPageControl]
-[QLPreviewView _needsPageControlForDisplayBundle:]
-[QLPreviewView needsPageControl]
+[QLPreviewView keyPathsForValuesAffectingNumberOfPages]
-[QLPreviewView numberOfPages]
+[QLPreviewView keyPathsForValuesAffectingCurrentPage]
-[QLPreviewView currentPage]
-[QLPreviewView setCurrentPage:]
+[QLPreviewView keyPathsForValuesAffectingNeedsScrollControl]
-[QLPreviewView _needsScrollControlForDisplayBundle:]
-[QLPreviewView needsScrollControl]
+[QLPreviewView keyPathsForValuesAffectingTotalScroll]
-[QLPreviewView totalScroll]
+[QLPreviewView keyPathsForValuesAffectingCurrentScroll]
-[QLPreviewView currentScroll]
-[QLPreviewView setCurrentScroll:]
+[QLPreviewView keyPathsForValuesAffectingTotalHorizontalScroll]
-[QLPreviewView totalHorizontalScroll]
+[QLPreviewView keyPathsForValuesAffectingCurrentHorizontalScroll]
-[QLPreviewView currentHorizontalScroll]
-[QLPreviewView setCurrentHorizontalScroll:]
+[QLPreviewView keyPathsForValuesAffectingNeedsZoomControl]
-[QLPreviewView _needsZoomControlForDisplayBundle:]
-[QLPreviewView needsZoomControl]
+[QLPreviewView keyPathsForValuesAffectingMaxZoomFactor]
-[QLPreviewView maxZoomFactor]
+[QLPreviewView keyPathsForValuesAffectingZoomFactorToFitWidth]
-[QLPreviewView zoomFactorToFitWidth]
+[QLPreviewView keyPathsForValuesAffectingFocusPoint]
-[QLPreviewView focusPoint]
-[QLPreviewView setFocusPoint:]
+[QLPreviewView keyPathsForValuesAffectingZoomFactor]
-[QLPreviewView zoomFactor]
-[QLPreviewView setZoomFactor:]
+[QLPreviewView keyPathsForValuesAffectingAutoZooms]
-[QLPreviewView autoZooms]
-[QLPreviewView setAutoZooms:]
+[QLPreviewView keyPathsForValuesAffectingProgress]
-[QLPreviewView progress]
-[QLPreviewView _shouldShowViewControls:overlayControls:forDisplayBundle:]
-[QLPreviewView _updateControls]
-[QLPreviewView _setPreviewContainerViewFrame:]
-[QLPreviewView _activateViewControls]
-[QLPreviewView _deactivateViewControls]
+[QLPreviewView keyPathsForValuesAffectingVerticalScrollValue]
-[QLPreviewView verticalScrollValue]
-[QLPreviewView setVerticalScrollValue:]
+[QLPreviewView keyPathsForValuesAffectingVerticalKnobProportion]
-[QLPreviewView verticalKnobProportion]
+[QLPreviewView keyPathsForValuesAffectingHorizontalScrollValue]
-[QLPreviewView horizontalScrollValue]
-[QLPreviewView setHorizontalScrollValue:]
+[QLPreviewView keyPathsForValuesAffectingHorizontalKnobProportion]
-[QLPreviewView horizontalKnobProportion]
-[QLPreviewView scrollController:pageScrollPercentageForScroller:]
-[QLPreviewView scrollController:scrollerDidEndTracking:]
-[QLPreviewView _activatePageNumberDisplay]
-[QLPreviewView _deactivatePageNumberDisplay]
-[QLPreviewView _hasSetupPageNumberOverlay]
-[QLPreviewView _activatePathOverlay]
-[QLPreviewView _deactivatePathOverlay]
-[QLPreviewView _hasPathOverlay]
-[QLPreviewView _pathString]
-[QLPreviewView _activateOverlayControls]
-[QLPreviewView _deactivateOverlayControls]
-[QLPreviewView _hasOverlayControls]
-[QLPreviewView updateOverlayFrame]
-[QLPreviewView updateTrackingAreas]
-[QLPreviewView overlayParentView]
-[QLPreviewView overlayParentLayer]
+[QLPreviewView keyPathsForValuesAffectingOverlayFrame]
-[QLPreviewView overlayFrame]
-[QLPreviewView rolloverFrame]
-[QLPreviewView rolloverActivationDelay]
-[QLPreviewView shouldAlwaysHandleMultiClicks]
-[QLPreviewView _startHandlingEvent]
-[QLPreviewView _stopHandlingEvent]
-[QLPreviewView _stopHandlingEventWithPreviousValue:]
-[QLPreviewView _forwardEvent:selector:]
-[QLPreviewView _handleEvent:selector:]
-[QLPreviewView _handleEvent:selector:forwardSelector:]
-[QLPreviewView _handleEvent:selector:forwardSelector:displayBundleHandledBlock:]
-[QLPreviewView mouseDown:]
___27-[QLPreviewView mouseDown:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPreviewView defaultMouseDown:]
-[QLPreviewView mouseUp:]
-[QLPreviewView mouseDragged:]
-[QLPreviewView mouseMoved:]
-[QLPreviewView scrollWheel:]
-[QLPreviewView defaultScrollWheel:]
-[QLPreviewView beginGestureWithEvent:]
-[QLPreviewView endGestureWithEvent:]
-[QLPreviewView cursorUpdate:]
-[QLPreviewView rotateWithEvent:]
-[QLPreviewView magnifyWithEvent:]
-[QLPreviewView smartMagnifyWithEvent:]
-[QLPreviewView doCommandBySelector:]
-[QLPreviewView keyDown:]
-[QLPreviewView hitTest:]
-[QLPreviewView viewForEvent:]
-[QLPreviewView _displayBundlePointForWindowPoint:]
-[QLPreviewView locationForEvent:]
-[QLPreviewView tracksMouseMovements]
-[QLPreviewView setTracksMouseMovements:]
-[QLPreviewView shouldDelayWindowOrderingForEvent:]
-[QLPreviewView mouseDownCanMoveWindow]
-[QLPreviewView acceptsFirstMouse:]
-[QLPreviewView acceptsFirstResponder]
-[QLPreviewView becomeFirstResponder]
-[QLPreviewView _previewFirstResponder]
-[QLPreviewView respondsToSelector:]
-[QLPreviewView copy:]
-[QLPreviewView selectAll:]
-[QLPreviewView setEnableDragNDrop:]
-[QLPreviewView enableDragNDrop]
-[QLPreviewView _startDraggingWithEvent:]
-[QLPreviewView draggingSourceOperationMaskForLocal:]
-[QLPreviewView draggingEntered:]
-[QLPreviewView draggingExited:]
-[QLPreviewView draggingUpdated:]
-[QLPreviewView performDragOperation:]
-[QLPreviewView wantsPeriodicDraggingUpdates]
-[QLPreviewView wantsScrollEventsForSwipeTrackingOnAxis:]
-[QLPreviewView _adjustedSizeFromSize:withMinSize:maxSize:ratio:deltaPosition:maxArea:]
___87-[QLPreviewView _adjustedSizeFromSize:withMinSize:maxSize:ratio:deltaPosition:maxArea:]_block_invoke
___copy_helper_block_1260
___destroy_helper_block_1261
-[QLPreviewView _adjustDeltaPosition:forDisplayBundle:]
-[QLPreviewView _adaptPreviewFrameForStaticPreviewSizeHint:minSize:maxSize:]
-[QLPreviewView _shouldAdaptSizeToScreen]
-[QLPreviewView minimumSizeOfContentWithDefault:]
-[QLPreviewView optimalSizeFromCurrentSize:minSize:maxSize:defaultSize:maxArea:screen:]
-[QLPreviewView _updateFrameOfDisplayable:]
-[QLPreviewView _convertRectFromDisplayedDisplayable:]
-[QLPreviewView _convertRectToDisplayedDisplayable:]
+[QLPreviewView keyPathsForValuesAffectingPreviewDocumentFrame]
-[QLPreviewView previewDocumentFrame]
+[QLPreviewView keyPathsForValuesAffectingPreviewContentFrame]
-[QLPreviewView previewContentFrame]
+[QLPreviewView keyPathsForValuesAffectingPreviewOpaqueFrame]
-[QLPreviewView previewOpaqueFrame]
+[QLPreviewView keyPathsForValuesAffectingPreviewContentFrameForSeamlessOpening]
-[QLPreviewView previewContentFrameForSeamlessOpening]
+[QLPreviewView keyPathsForValuesAffectingPreviewUsefulFrame]
-[QLPreviewView previewUsefulFrame]
-[QLPreviewView scalable]
-[QLPreviewView fastDrawing]
-[QLPreviewView prefersSizeToFit]
-[QLPreviewView setSizesPreviewToFit:]
-[QLPreviewView sizesPreviewToFit]
-[QLPreviewView naturalPreviewSize]
-[QLPreviewView optimalSizeForBoundingSize:]
-[QLPreviewView setUpdatePreviewSize:]
-[QLPreviewView resizeSubviewsWithOldSize:]
-[QLPreviewView viewDidHide]
-[QLPreviewView viewDidUnhide]
-[QLPreviewView viewWillMoveToWindow:]
-[QLPreviewView viewDidMoveToWindow]
-[QLPreviewView _windowWillClose:]
-[QLPreviewView viewWillStartLiveResize]
-[QLPreviewView viewDidEndLiveResize]
-[QLPreviewView backingScaleDidChange:]
-[QLPreviewView actionForLayer:forKey:]
-[QLPreviewView start:]
-[QLPreviewView stop:]
-[QLPreviewView startWatchingURL:]
-[QLPreviewView stopWatchingURL:]
-[QLPreviewView _invalidateCachedDocumentForURL:]
-[QLPreviewView pathWatcher:fileAtURLWasMoved:]
-[QLPreviewView pathWatcher:fileAtURLWasModified:onlyAttributes:]
-[QLPreviewView pathWatcher:fileAtURLWasDeleted:]
-[QLPreviewView discardAccessoryControllers]
-[QLPreviewView seamlessOpener:sourcePreviewViewForPreviewItem:]
-[QLPreviewView launchURLForPreviewItem:]
-[QLPreviewView setAppURLForNextOpening:]
-[QLPreviewView appURLForNextOpening]
-[QLPreviewView openExternalURLNoChecks:]
-[QLPreviewView openExternalURL:]
-[QLPreviewView shouldOpenURL:]
-[QLPreviewView allowsAlerts]
-[QLPreviewView setAllowsAlerts:]
-[QLPreviewView _accessibilityIsLoading]
-[QLPreviewView _accessibilityIsEmpty]
-[QLPreviewView accessibilityHitTest:]
-[QLPreviewView accessibilityAttributeValue:]
-[QLPreviewView contentImage]
-[QLPreviewView copyImageRepresentationWithFrame:]
-[QLPreviewView generateThumbnailForPage:maxSize:completionBlock:]
-[QLPreviewView contentLayer]
+[QLPreviewView _descriptionOfDisplayable:]
-[QLPreviewView description]
-[QLPreviewView debugPreview:]
-[QLPreviewView _descriptionForView:]
-[QLPreviewView _hierarchicalDescriptionForView:level:]
-[QLPreviewView viewsDescription]
-[QLPreviewView setDebugHighlighted:]
-[QLPreviewView debugHighlighted]
-[QLPreviewView setMandatoryServer:]
-[QLPreviewView mandatoryServer]
-[QLPreviewView setForcedContentTypeUTI:]
-[QLPreviewView forcedContentTypeUTI]
-[QLPreviewView(QLDeprecated) set_emptyView:]
-[QLPreviewView(QLDeprecated) set_genericView:]
-[QLPreviewView(QLDeprecated) set_loadingView:]
-[QLInlinePreviewController init]
-[QLInlinePreviewController dealloc]
-[QLInlinePreviewController backingScaleFactor]
-[QLInlinePreviewController setBackingScaleFactor:]
-[QLInlinePreviewController useLayers]
-[QLInlinePreviewController _shouldOpenInlinePreview]
-[QLInlinePreviewController _shouldShowInlinePreviewControlsOfPreviewView:]
-[QLInlinePreviewController _shouldShowInlinePreviewContentOfPreviewView:]
-[QLInlinePreviewController _createInlinePreviewIfNeeded]
-[QLInlinePreviewController setSharingPreviewPanel:]
-[QLInlinePreviewController _setInlinePreviewItem:]
-[QLInlinePreviewController setInlinePreviewItem:]
-[QLInlinePreviewController inlinePreviewItem]
-[QLInlinePreviewController updatePreviewFrame]
-[QLInlinePreviewController _updateInlinePreview]
-[QLInlinePreviewController _startObserving]
-[QLInlinePreviewController _stopObserving]
-[QLInlinePreviewController _openInlinePreview]
-[QLInlinePreviewController _closeInlinePreview]
-[QLInlinePreviewController _setInlinePreviewVisible:animate:]
-[QLInlinePreviewController _inlinePreviewDidChangePlaying:]
-[QLInlinePreviewController _inlinePreviewDidChangePage:]
-[QLInlinePreviewController status]
-[QLInlinePreviewController inlinePreviewState]
-[QLInlinePreviewController setInlinePreviewState:]
-[QLInlinePreviewController _shouldKeepThumbnail]
-[QLInlinePreviewController _shouldCrossfade]
-[QLInlinePreviewController shouldKeepThumbnail]
-[QLInlinePreviewController contentLayer]
+[QLInlinePreviewController specialInlinePreviewModeForPreviewItem:]
+[QLInlinePreviewController inlinePreviewTrackingAreaOptions]
+[QLInlinePreviewController inlinePreviewMinimumSupportedSize]
-[QLInlinePreviewController overlayParentView]
-[QLInlinePreviewController overlayParentLayer]
-[QLInlinePreviewController _itemFrame]
-[QLInlinePreviewController overlayFrame]
-[QLInlinePreviewController rolloverFrame]
-[QLInlinePreviewController showControls]
-[QLInlinePreviewController shouldAlwaysHandleMultiClicks]
-[QLInlinePreviewController needsPlayControl]
-[QLInlinePreviewController needsPageControl]
-[QLInlinePreviewController needsTimeControl]
+[QLInlinePreviewController keyPathsForValuesAffectingNumberOfPages]
-[QLInlinePreviewController numberOfPages]
-[QLInlinePreviewController currentPage]
-[QLInlinePreviewController setCurrentPage:]
-[QLInlinePreviewController playing]
-[QLInlinePreviewController setPlaying:]
-[QLInlinePreviewController progress]
-[QLInlinePreviewController mouseEntered]
-[QLInlinePreviewController mouseExited]
-[QLInlinePreviewController mouseDownAtPoint:clickCount:dequeue:]
-[QLInlinePreviewController mouseDownAtPoint:clickCount:]
-[QLInlinePreviewController mouseDownAtPoint:]
-[QLInlinePreviewController overlayControllerForPreviewView:]
-[QLInlinePreviewController contentFrameForPreviewView:]
-[QLInlinePreviewController rolloverFrameForPreviewView:]
-[QLInlinePreviewController flavorForPreviewView:]
-[QLInlinePreviewController isPreviewViewVisible:]
-[QLInlinePreviewController isPreviewHostedInWindowServer:]
-[QLInlinePreviewController previewViewBackingScaleFactor:]
-[QLInlinePreviewController previewView:willLoadPreviewItem:]
-[QLInlinePreviewController previewView:willShowPreviewItem:]
-[QLInlinePreviewController previewView:didShowPreviewItem:]
-[QLInlinePreviewController previewView:didFailLoadingPreviewItem:]
-[QLInlinePreviewController previewView:shouldBypassLoadingOfPreviewItem:]
-[QLInlinePreviewController shouldAlwaysHandleMultiClicksForPreviewView:]
-[QLInlinePreviewController sharedPreviewView:willStartSharingWithPreviewPanel:]
-[QLInlinePreviewController sharedPreviewView:didStartSharingWithPreviewPanel:]
-[QLInlinePreviewController sharedPreviewView:willStopSharingWithPreviewPanel:]
-[QLInlinePreviewController sharedPreviewView:didStopSharingWithPreviewPanel:]
-[QLInlinePreviewController sharedPreviewView:failedToStartSharingWithPreviewPanel:]
-[QLInlinePreviewController sharedPreviewView:shouldHaveContinuousTransitionWithPreviewView:]
-[QLInlinePreviewController _boolValueFromObject:]
-[QLInlinePreviewController _integerValueFromObject:]
-[QLInlinePreviewController observeValueForKeyPath:ofObject:change:context:]
-[QLInlinePreviewController delegate]
-[QLInlinePreviewController setDelegate:]
-[QLInlinePreviewController sharingPreviewPanel]
-[QLInlinePreviewController autoplay]
-[QLInlinePreviewController setAutoplay:]
-[QLInlinePreviewController crossfade]
-[QLInlinePreviewController setCrossfade:]
-[QLInlinePreviewController hostingView]
-[QLInlinePreviewController setHostingView:]
-[QLInlinePreviewController hostingLayer]
-[QLInlinePreviewController setHostingLayer:]
-[QLInlinePreviewController previewView]
-[QLInlinePreviewController hostingLayerIsInWindowServer]
-[QLInlinePreviewController setHostingLayerIsInWindowServer:]
-[QLInlinePreviewController lazyLoading]
-[QLInlinePreviewController setLazyLoading:]
-[QLOverlayProgressHalfCircleLayer drawInContext:]
-[QLOverlayProgressHalfCircleLayer setContentsScale:]
-[QLOverlayProgressHalfCircleLayer roundup]
-[QLOverlayProgressHalfCircleLayer setRoundup:]
-[QLOverlayProgressDeterminateLayer init]
-[QLOverlayProgressDeterminateLayer setContentsScale:]
-[QLOverlayProgressDeterminateLayer setProgress:]
-[QLOverlayProgressDeterminateLayer dealloc]
-[QLOverlayProgressDeterminateLayer layoutSublayers]
-[QLOverlayProgressDeterminateLayer actionForLayer:forKey:]
-[QLOverlayProgressDeterminateLayer progress]
-[QLOverlayProgressMaskLayer drawInContext:]
-[QLOverlayProgressMaskLayer setContentsScale:]
-[QLOverlayProgressIndeterminateLayer drawInContext:]
-[QLOverlayProgressIndeterminateLayer setContentsScale:]
-[QLOverlayProgressBackgroundLayer drawInContext:]
-[QLOverlayProgressBackgroundLayer setContentsScale:]
-[QLOverlayProgressForegroundLayer drawInContext:]
-[QLOverlayProgressForegroundLayer setContentsScale:]
-[QLOverlayProgressLayer init]
-[QLOverlayProgressLayer setContentsScale:]
-[QLOverlayProgressLayer hitTest:]
-[QLOverlayProgressLayer _updateMiddleLayer]
-[QLOverlayProgressLayer setProgress:]
-[QLOverlayProgressLayer setExpanded:]
___38-[QLOverlayProgressLayer setExpanded:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLOverlayProgressLayer expanded]
+[QLOverlayProgressLayer defaultActionForKey:]
-[QLOverlayProgressLayer progress]
-[QLOverlayButtonAccessoryLayer buttonLayer]
-[QLOverlayButtonImageLayer hitTest:]
+[QLOverlayButtonImageLayer defaultActionForKey:]
-[QLOverlayButtonBackgroundLayer drawInContext:]
-[QLOverlayButtonBackgroundLayer setContentsScale:]
-[QLOverlayButtonBackgroundLayer hitTest:]
+[QLOverlayButtonBackgroundLayer defaultActionForKey:]
-[QLOverlayButtonContentLayer drawInContext:]
-[QLOverlayButtonContentLayer setContentsScale:]
-[QLOverlayButtonContentLayer hitTest:]
+[QLOverlayButtonContentLayer defaultActionForKey:]
+[QLOverlayBaseButtonLayer buttonSize]
+[QLOverlayBaseButtonLayer _pushButtonShapeForFrame:inContext:]
+[QLOverlayBaseButtonLayer _shadowBlur]
+[QLOverlayBaseButtonLayer _shadowWidth]
-[QLOverlayBaseButtonLayer init]
-[QLOverlayBaseButtonLayer setContentsScale:]
-[QLOverlayBaseButtonLayer mouseDownAtPoint:clickCount:]
-[QLOverlayBaseButtonLayer _enableClickAtPoint:]
-[QLOverlayBaseButtonLayer _beginMouseDownAtPoint:]
-[QLOverlayBaseButtonLayer _endMouseDownAtPoint:]
-[QLOverlayBaseButtonLayer buttonBorderWidth]
-[QLOverlayBaseButtonLayer setSmallSize:]
-[QLOverlayBaseButtonLayer target]
-[QLOverlayBaseButtonLayer setTarget:]
-[QLOverlayBaseButtonLayer action]
-[QLOverlayBaseButtonLayer setAction:]
-[QLOverlayBaseButtonLayer smallSize]
-[QLOverlayButtonLayer init]
-[QLOverlayButtonLayer dealloc]
-[QLOverlayButtonLayer setContentsScale:]
-[QLOverlayButtonLayer setEnabled:]
-[QLOverlayButtonLayer enabled]
-[QLOverlayButtonLayer setImage:]
-[QLOverlayButtonLayer image]
-[QLOverlayButtonLayer hitTest:]
-[QLOverlayButtonLayer _enableClickAtPoint:]
-[QLOverlayButtonLayer _beginMouseDownAtPoint:]
-[QLOverlayButtonLayer _endMouseDownAtPoint:]
-[QLOverlayButtonLayer imageOffset]
-[QLOverlayButtonLayer setImageOffset:]
+[QLOverlayProgressButtonLayer buttonSize]
+[QLOverlayProgressButtonLayer _shadowBlur]
+[QLOverlayProgressButtonLayer _shadowWidth]
-[QLOverlayProgressButtonLayer init]
-[QLOverlayProgressButtonLayer setContentsScale:]
-[QLOverlayProgressButtonLayer setExpanded:]
-[QLOverlayProgressButtonLayer expanded]
-[QLOverlayProgressButtonLayer _updateExpandedLook]
-[QLOverlayProgressButtonLayer setProgress:]
___44-[QLOverlayProgressButtonLayer setProgress:]_block_invoke
___copy_helper_block_334
___destroy_helper_block_335
-[QLOverlayProgressButtonLayer progress]
-[QLOverlayLoadingButtonLayer setLoading:]
-[QLOverlayLoadingButtonLayer loading]
-[QLOverlayMultiButtonLayer init]
-[QLOverlayMultiButtonLayer dealloc]
-[QLOverlayMultiButtonLayer _setEnabled:atIndex:]
-[QLOverlayMultiButtonLayer _enabledAtIndex:]
-[QLOverlayMultiButtonLayer setLeftEnabled:]
-[QLOverlayMultiButtonLayer leftEnabled]
-[QLOverlayMultiButtonLayer setRightEnabled:]
-[QLOverlayMultiButtonLayer rightEnabled]
-[QLOverlayMultiButtonLayer setImages:]
-[QLOverlayMultiButtonLayer images]
-[QLOverlayMultiButtonLayer _enableClickAtPoint:]
-[QLOverlayMultiButtonLayer _beginMouseDownAtPoint:]
-[QLOverlayMultiButtonLayer _endMouseDownAtPoint:]
-[QLOverlayMultiButtonLayer clickedIndex]
-[QLOverlayView hitTest:]
-[QLOverlayView _CAViewFlags]
+[QLPreviewOverlayController overlayTrackingAreaOptions]
+[QLPreviewOverlayController _defaultRolloverActivationDelay]
+[QLPreviewOverlayController overlayMinimumSupportedSize]
-[QLPreviewOverlayController init]
-[QLPreviewOverlayController dealloc]
-[QLPreviewOverlayController setDataSource:]
-[QLPreviewOverlayController dataSource]
-[QLPreviewOverlayController useLayers]
-[QLPreviewOverlayController _shouldShowOverlay]
-[QLPreviewOverlayController _shouldDimOverlay]
-[QLPreviewOverlayController setVisibilityOptions:]
-[QLPreviewOverlayController visibilityOptions]
-[QLPreviewOverlayController _setShowOverlay:dimmed:]
-[QLPreviewOverlayController _setShowPlayButton:canExpand:showPageButtons:]
-[QLPreviewOverlayController _updateOverlayVisibility]
-[QLPreviewOverlayController _updateOverlay]
-[QLPreviewOverlayController _updateMouseOver]
-[QLPreviewOverlayController updateOverlayFrame]
-[QLPreviewOverlayController _createOverlay]
-[QLPreviewOverlayController _removeOverlay]
-[QLPreviewOverlayController _updatePlayButton]
-[QLPreviewOverlayController activate]
-[QLPreviewOverlayController _addObservers]
-[QLPreviewOverlayController deactivate]
-[QLPreviewOverlayController _removeObservers]
-[QLPreviewOverlayController isActive]
-[QLPreviewOverlayController _mouseEntered]
-[QLPreviewOverlayController _rolloverActivationDelay]
-[QLPreviewOverlayController mouseEntered]
-[QLPreviewOverlayController mouseExited]
-[QLPreviewOverlayController mouseEntered:]
-[QLPreviewOverlayController mouseExited:]
-[QLPreviewOverlayController _mouseDownAtLocalPoint:clickCount:dequeue:]
-[QLPreviewOverlayController mouseDownAtPoint:clickCount:dequeue:]
-[QLPreviewOverlayController togglePlay:]
-[QLPreviewOverlayController goToNextPage:]
-[QLPreviewOverlayController goToPreviousPage:]
+[QLPreviewOverlayController keyPathsForValuesAffectingCanGoToNextPage]
-[QLPreviewOverlayController canGoToNextPage]
+[QLPreviewOverlayController keyPathsForValuesAffectingCanGoToPreviousPage]
-[QLPreviewOverlayController canGoToPreviousPage]
+[QLPreviewOverlayController keyPathsForValuesAffectingIsLoadingNextPage]
-[QLPreviewOverlayController isLoadingNextPage]
-[QLPreviewOverlayController windowWillClose:]
-[QLPreviewOverlayController previewWindowDidResizeFrame:]
-[QLPreviewOverlayController worksWhenModal]
-[QLPreviewOverlayController observeValueForKeyPath:ofObject:change:context:]
-[QLLoadingLayer init]
-[QLLoadingLayer willShow]
-[QLLoadingLayer didHide]
-[QLLoadingLayer layoutSublayers]
-[QLLoadingLayer actionForLayer:forKey:]
-[QLLoadingLayer setLoadingString:]
-[QLLoadingLayer loadingString]
-[QLLoadingLayer setContents:]
-[QLLoadingLayer setMode:]
-[QLLoadingLayer setContentsScale:]
-[QLLoadingLayer setWhiteProgressIndicator:]
-[QLLoadingLayer whiteProgressIndicator]
-[QLLoadingLayer setLargeIndicator:]
-[QLLoadingLayer showSpinner]
-[QLLoadingLayer setShowSpinner:]
-[QLLoadingLayer borderFrame]
-[QLLoadingLayer largeIndicator]
+[QLTextLayer defaultActionForKey:]
-[QLTextLayer drawInContext:]
-[QLTextLayer setContentsScale:]
-[QLCenteredTextLayer init]
-[QLCenteredTextLayer layoutSublayers]
-[QLCenteredTextLayer actionForLayer:forKey:]
-[QLCenteredTextLayer string]
-[QLCenteredTextLayer setString:]
-[QLCenteredTextLayer setWhiteColor:]
-[QLCenteredTextLayer setContentsScale:]
-[QLCenteredTextLayer whiteColor]
-[QLCustomTextLayer dealloc]
-[QLCustomTextLayer _updateLayerSize]
-[QLCustomTextLayer _updateTextSize]
-[QLCustomTextLayer setAttributes:]
-[QLCustomTextLayer setText:]
-[QLCustomTextLayer setAttributedText:]
-[QLCustomTextLayer setTextMargins:]
-[QLCustomTextLayer textSize]
-[QLCustomTextLayer setContentsScale:]
-[QLCustomTextLayer sizeToFitInSize:]
-[QLCustomTextLayer drawInContext:]
-[QLCustomTextLayer actionForKey:]
-[QLCustomTextLayer needsDisplayOnBoundsChange]
-[QLCustomTextLayer text]
-[QLCustomTextLayer attributes]
-[QLCustomTextLayer attributedText]
-[QLCustomTextLayer textMargins]
-[QLCustomTextLayer animates]
-[QLCustomTextLayer setAnimates:]
-[QLEventLessLayer containsPoint:]
-[QLDrawingLayer drawInContext:]
-[QLDrawingLayer drawingDelegate]
-[QLDrawingLayer setDrawingDelegate:]
__QLDisplayableAsDisplayBundle
__QLVisibilityGetName
__QLPreviewCheckVisibility
__QLPreviewCheckAndChangeVisibility
-[QLPreviewHighlight frame]
-[QLPreviewHighlight setFrame:]
-[QLPreviewHighlight transform]
-[QLPreviewHighlight setTransform:]
-[NSView(QLDisplayableAddition) quickLookView]
-[NSView(QLDisplayableAddition) quickLookLayer]
-[NSView(QLDisplayableAddition) quickLookFrame]
-[NSView(QLDisplayableAddition) setQuickLookFrame:]
-[CALayer(QLDisplayableAddition) quickLookView]
-[CALayer(QLDisplayableAddition) quickLookLayer]
-[CALayer(QLDisplayableAddition) quickLookFrame]
-[CALayer(QLDisplayableAddition) setQuickLookFrame:]
-[QLDisplayBundle initWithPreview:owner:]
-[QLDisplayBundle dealloc]
-[QLDisplayBundle preview]
-[QLDisplayBundle setPreview:]
-[QLDisplayBundle displayBundleID]
-[QLDisplayBundle previewItem]
-[QLDisplayBundle URL]
-[QLDisplayBundle performSelector:withObject:afterDelay:]
-[QLDisplayBundle _discardBoundWindowControllers]
-[QLDisplayBundle _unbindWindowController:]
-[QLDisplayBundle _bindedWindowWillClose:]
-[QLDisplayBundle showAccessoryController:]
-[QLDisplayBundle discardAccessoryControllers]
-[QLDisplayBundle loadWithHints:]
-[QLDisplayBundle cancelLoading]
-[QLDisplayBundle willTimeOut]
-[QLDisplayBundle isLoaded]
-[QLDisplayBundle isRemote]
-[QLDisplayBundle isHostedInWindowServer]
-[QLDisplayBundle isWindowKey]
-[QLDisplayBundle canBeReused]
-[QLDisplayBundle isValidInPreviewMode:]
+[QLDisplayBundle potentialExpectedDisplayBundleIDsForPreview:]
-[QLDisplayBundle didLoad]
-[QLDisplayBundle didMismatchLoadingWithHints:expectedDisplayBundleID:]
-[QLDisplayBundle didFailLoadingWithError:]
-[QLDisplayBundle didDesistRemoteWithExpectedDisplayBundleID:]
-[QLDisplayBundle reloadAndFallbackWithError:]
-[QLDisplayBundle sizingUpdated]
-[QLDisplayBundle customTitleUpdated]
-[QLDisplayBundle activationState]
-[QLDisplayBundle activated]
-[QLDisplayBundle deactivated]
-[QLDisplayBundle activate]
-[QLDisplayBundle deactivate]
-[QLDisplayBundle discard]
-[QLDisplayBundle cleanup]
-[QLDisplayBundle _startObservingOwner]
-[QLDisplayBundle _stopObservingOwner]
-[QLDisplayBundle setVisibility:]
-[QLDisplayBundle willShow]
-[QLDisplayBundle didShow]
-[QLDisplayBundle willHide]
-[QLDisplayBundle didHide]
-[QLDisplayBundle willOpen]
-[QLDisplayBundle didOpen]
-[QLDisplayBundle refreshSynchronously]
-[QLDisplayBundle quickLookView]
-[QLDisplayBundle quickLookLayer]
-[QLDisplayBundle contentLayer]
-[QLDisplayBundle contentView]
-[QLDisplayBundle displayFlags]
-[QLDisplayBundle additionalDisplayFlags]
-[QLDisplayBundle disabledDisplayFlags]
-[QLDisplayBundle hasDisplayFlag:]
-[QLDisplayBundle customDisplayNameWithLongForm:]
-[QLDisplayBundle customDisplayName]
-[QLDisplayBundle displayNameComplement]
-[QLDisplayBundle canShowTitleInBubble]
-[QLDisplayBundle canShowOpenButton]
-[QLDisplayBundle isDisplayingError]
-[QLDisplayBundle opaque]
-[QLDisplayBundle viewUsesLayer]
+[QLDisplayBundle keyPathsForValuesAffectingDisplayState]
-[QLDisplayBundle displayState]
-[QLDisplayBundle setDisplayState:]
-[QLDisplayBundle highlighted]
-[QLDisplayBundle setHighlighted:]
-[QLDisplayBundle mode]
-[QLDisplayBundle backgroundStyle]
-[QLDisplayBundle overlayVisibilityOptions]
-[QLDisplayBundle shouldShowInlinePreviewControls]
-[QLDisplayBundle shouldShowInlinePreviewContent]
-[QLDisplayBundle keepThumbnailUnderInlinePreview]
-[QLDisplayBundle inLiveResize]
-[QLDisplayBundle hasHorizontalScroller]
-[QLDisplayBundle modeDidChange]
-[QLDisplayBundle backingScaleFactorDidChange]
-[QLDisplayBundle hostedInWindowServerDidChange]
-[QLDisplayBundle globalOriginDidChange]
-[QLDisplayBundle windowKeyDidChange]
-[QLDisplayBundle observeValueForKeyPath:ofObject:change:context:]
-[QLDisplayBundle flavor]
-[QLDisplayBundle drawFlavorInBackgroundLayer:foregroundLayer:contentSize:maxSize:parts:]
-[QLDisplayBundle drawHighlights:inContext:style:]
-[QLDisplayBundle shouldDrawBubbleBackground]
-[QLDisplayBundle drawBubbleBackgroundInFrame:contentFrame:]
-[QLDisplayBundle quickLookFrame]
-[QLDisplayBundle setQuickLookFrame:]
-[QLDisplayBundle backingScaleFactor]
-[QLDisplayBundle globalOrigin]
+[QLDisplayBundle keyPathsForValuesAffectingContentFrame]
-[QLDisplayBundle contentFrame]
-[QLDisplayBundle opaqueFrame]
+[QLDisplayBundle keyPathsForValuesAffectingContentFrameForSeamlessOpening]
-[QLDisplayBundle contentFrameForSeamlessOpening]
+[QLDisplayBundle keyPathsForValuesAffectingBorderFrame]
-[QLDisplayBundle borderFrame]
-[QLDisplayBundle sizingConstraints]
-[QLDisplayBundle scalable]
-[QLDisplayBundle layoutSublayersOfLayer:]
-[QLDisplayBundle actionForLayer:forKey:]
-[QLDisplayBundle delegatesControls]
+[QLDisplayBundle keyPathsForValuesAffectingHasTime]
-[QLDisplayBundle hasTime]
-[QLDisplayBundle autoplay]
-[QLDisplayBundle playing]
-[QLDisplayBundle setPlaying:]
-[QLDisplayBundle duration]
-[QLDisplayBundle currentTime]
-[QLDisplayBundle setCurrentTime:]
+[QLDisplayBundle keyPathsForValuesAffectingPlayedToTheEnd]
-[QLDisplayBundle playedToTheEnd]
-[QLDisplayBundle hasAudio]
-[QLDisplayBundle muted]
-[QLDisplayBundle setMuted:]
-[QLDisplayBundle volume]
-[QLDisplayBundle setVolume:]
-[QLDisplayBundle hasPages]
-[QLDisplayBundle numberOfPages]
-[QLDisplayBundle currentPage]
-[QLDisplayBundle setCurrentPage:]
-[QLDisplayBundle pageDisplay]
-[QLDisplayBundle showScrollerToChangePages]
-[QLDisplayBundle defaultPageThumbnailRatio]
+[QLDisplayBundle keyPathsForValuesAffectingHasScrolling]
-[QLDisplayBundle hasScrolling]
-[QLDisplayBundle totalScroll]
-[QLDisplayBundle currentScroll]
-[QLDisplayBundle setCurrentScroll:]
-[QLDisplayBundle totalHorizontalScroll]
-[QLDisplayBundle currentHorizontalScroll]
-[QLDisplayBundle setCurrentHorizontalScroll:]
+[QLDisplayBundle keyPathsForValuesAffectingHasZooming]
-[QLDisplayBundle hasZooming]
-[QLDisplayBundle maxZoomFactor]
-[QLDisplayBundle zoomFactorToFitWidth]
-[QLDisplayBundle focusPoint]
-[QLDisplayBundle setFocusPoint:]
-[QLDisplayBundle zoomFactor]
-[QLDisplayBundle setZoomFactor:]
-[QLDisplayBundle autoZooms]
-[QLDisplayBundle setAutoZooms:]
-[QLDisplayBundle responder]
-[QLDisplayBundle _dispatchEvent:selector:]
-[QLDisplayBundle responder:shouldHandleEvent:]
-[QLDisplayBundle keyDown:]
-[QLDisplayBundle mouseDown:]
-[QLDisplayBundle mouseUp:]
-[QLDisplayBundle mouseMoved:]
-[QLDisplayBundle mouseDragged:]
-[QLDisplayBundle scrollWheel:]
-[QLDisplayBundle magnifyWithEvent:]
-[QLDisplayBundle smartMagnifyWithEvent:]
-[QLDisplayBundle beginGestureWithEvent:]
-[QLDisplayBundle endGestureWithEvent:]
-[QLDisplayBundle cursorUpdate:]
-[QLDisplayBundle rotateWithEvent:]
-[QLDisplayBundle viewForEvent:]
-[QLDisplayBundle locationForEvent:]
-[QLDisplayBundle willStartLiveResize]
-[QLDisplayBundle didEndLiveResize]
-[QLDisplayBundle isClickablePoint:]
-[QLDisplayBundle mustHandleEvent:]
-[QLDisplayBundle prefersLocalEventLoopForEvent:]
-[QLDisplayBundle tracksMouseMovements]
-[QLDisplayBundle observedEvents]
-[QLDisplayBundle setTracksMouseMovements:]
-[QLDisplayBundle prefersLocalEventLoop]
-[QLDisplayBundle copy:]
-[QLDisplayBundle selectAll:]
-[QLDisplayBundle canSelectText]
-[QLDisplayBundle writableTypesForPasteboard:]
-[QLDisplayBundle writingOptionsForType:pasteboard:]
-[QLDisplayBundle pasteboardPropertyListForType:]
-[QLDisplayBundle stringForPage:]
-[QLDisplayBundle stringRangeForPage:]
-[QLDisplayBundle rectsForStringRange:inPage:]
-[QLDisplayBundle findOccurrencesOfString:inPage:withOptions:]
-[QLDisplayBundle highlightedOccurrences]
-[QLDisplayBundle setHighlightedOccurrences:]
-[QLDisplayBundle focusedOccurrenceIndex]
-[QLDisplayBundle setFocusedOccurrenceIndex:]
-[QLDisplayBundle setFocusedOccurrenceIndex:inPage:]
-[QLDisplayBundle launchURL]
-[QLDisplayBundle openingApplicationInfo]
-[QLDisplayBundle shouldOpenExternalURL:]
-[QLDisplayBundle openExternalURL:]
-[QLDisplayBundle allowsAlerts]
-[QLDisplayBundle copyImageRepresentationWithFrame:]
___52-[QLDisplayBundle copyImageRepresentationWithFrame:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLDisplayBundle generateThumbnailForPage:maxSize:completionBlock:]
-[QLDisplayBundle drawPage:inRect:context:]
+[QLDisplayBundle _pathOfScreenshotWithKey:]
-[QLDisplayBundle _saveScreenshotWithKey:]
___42-[QLDisplayBundle _saveScreenshotWithKey:]_block_invoke
___copy_helper_block_571
___destroy_helper_block_572
+[QLDisplayBundle imageForScreenshotKey:]
-[QLDisplayBundle shouldPreserveAspectRatioWhenResizing]
-[QLDisplayBundle shouldShowPagesOnLeft]
-[QLDisplayBundle isSafe]
-[QLDisplayBundle allowsNetworkAccess]
-[QLDisplayBundle allowsJavascript]
-[QLDisplayBundle allowsPlugIns]
-[QLDisplayBundle allowsFileAccess]
-[QLDisplayBundle allowsOpeningFileURLs]
-[QLDisplayBundle validateURLSecureAccess:]
-[QLDisplayBundle debugPreview:]
-[QLDisplayBundle _operationCategory]
-[QLDisplayBundle beginOperation:]
-[QLDisplayBundle endOperation:]
-[QLDisplayBundle description]
+[QLDisplayBundle generateThumbnail:withData:contentTypeUTI:previewProperties:properties:]
+[QLDisplayBundle generateThumbnail:withURL:contentTypeUTI:previewProperties:properties:]
+[QLDisplayBundle newPreviewDocumentDisplayBundleForPreview:]
-[QLDisplayBundle visibility]
-[QLDisplayBundle owner]
-[QLDisplayBundle setOwner:]
-[QLDisplayBundle(Accessibility) accessibilityIsIgnored]
-[QLDisplayBundle(Accessibility) accessibilityUIElements]
-[QLDisplayBundle(Accessibility) accessibilityAttributeNames]
-[QLDisplayBundle(Accessibility) accessibilityAttributeValue:]
-[QLDisplayBundle(Accessibility) accessibilityAttributeValue:forUIElementWithIdentifier:]
-[QLDisplayBundle(Accessibility) accessibilityIsAttributeSettable:forUIElementWithIdentifier:]
-[QLDisplayBundle(Accessibility) accessibilityHitTest:]
-[QLDisplayBundle(Accessibility) frameForUIElementWithIdentifier:]
-[QLPreviewDocumentDisplayBundle initWithPreview:]
-[QLPreviewDocumentDisplayBundle dealloc]
-[QLPreviewDocumentDisplayBundle isPaginated]
-[QLPreviewDocumentDisplayBundle pageCount]
-[QLPreviewDocumentDisplayBundle pageSizeForPage:]
-[QLPreviewDocumentDisplayBundle drawPage:inRect:context:]
-[QLPreviewDocumentDisplayBundle isBitmap]
-[QLPreviewDocumentDisplayBundle copyPageAsImageType:maximumSize:pageNumber:]
-[QLPreviewDocumentDisplayBundle copyPageTextForPage:]
-[QLPreviewDocumentDisplayBundle preview]
-[CALayer(QLExtensions) _ql_getPixelBufferPixelFormat:]
-[CALayer(QLExtensions) _ql_renderIntoPixelBuffer:forTime:]
-[QLFallbackDisplayBundle initWithPreview:owner:]
-[QLFallbackDisplayBundle dealloc]
-[QLFallbackDisplayBundle loadWithHints:]
-[QLFallbackDisplayBundle quickLookView]
+[QLDisplayBundleLoader sharedLoader]
-[QLDisplayBundleLoader _lookForDisplayBundles]
-[QLDisplayBundleLoader init]
-[QLDisplayBundleLoader dealloc]
-[QLDisplayBundleLoader registerDisplayBundle:withBundleIdentifier:]
-[QLDisplayBundleLoader loadDisplayBundle:]
-[QLDisplayBundleLoader displayBundleClassForDisplayBundleID:]
-[QLDisplayBundleLoader displayBundleForPreview:owner:]
-[QLDisplayBundleLoader displayBundleForPreview:owner:forcedDisplayBundleID:]
-[QLDisplayBundleLoader newPreviewDocumentDisplayBundleForPreview:]
-[QLImageAndTextLayer init]
-[QLImageAndTextLayer setContentsScale:]
-[QLImageAndTextLayer setText:]
-[QLImageAndTextLayer text]
-[QLImageAndTextLayer setTopText:]
-[QLImageAndTextLayer topText]
-[QLImageAndTextLayer setImage:]
-[QLImageAndTextLayer image]
-[QLImageAndTextLayer setImageLayer:]
-[QLImageAndTextLayer imageLayer]
-[QLImageAndTextLayer _interspace]
-[QLImageAndTextLayer _idealTopTextHeightInBounds:]
-[QLImageAndTextLayer _topTextFrameInBounds:]
-[QLImageAndTextLayer _contentBoundsForBounds:]
-[QLImageAndTextLayer _imageFrameInBounds:textVisible:]
-[QLImageAndTextLayer _textFrameInBounds:fromImageFrame:]
-[QLImageAndTextLayer imageFrame]
-[QLImageAndTextLayer textFrame]
-[QLImageAndTextLayer optimalWidthWithHeight:]
-[QLImageAndTextLayer optimalSize]
-[QLImageAndTextLayer layoutSublayers]
-[QLImageAndTextLayer actionForLayer:forKey:]
-[QLImageAndTextLayer animationDidStop:finished:]
-[QLImageAndTextLayer setBounds:]
-[QLImageAndTextLayer setHighlighted:]
-[QLImageAndTextLayer highlighted]
-[QLImageAndTextLayer setPerspectiveLayout:]
-[QLImageAndTextLayer tightLayout]
-[QLImageAndTextLayer setTightLayout:]
-[QLImageAndTextLayer perspectiveLayout]
-[QLImageAndTextLayer maxImageSize]
-[QLImageAndTextLayer setMaxImageSize:]
-[QLImageAndTextLayer defaultImageSize]
-[QLImageAndTextLayer setDefaultImageSize:]
-[QLImageAndTextLayer minInfoSize]
-[QLImageAndTextLayer setMinInfoSize:]
-[QLImageAndTextLayer maxInfoSize]
-[QLImageAndTextLayer setMaxInfoSize:]
-[QLImageAndTextLayer margin]
-[QLImageAndTextLayer setMargin:]
-[QLImageAndTextLayer liveResize]
-[QLImageAndTextLayer setLiveResize:]
-[QLImageAndTextLayer userInterfaceLayoutDirection]
-[QLImageAndTextLayer setUserInterfaceLayoutDirection:]
-[QLSubThumbnailLayer initWithCGImage:]
-[QLSubThumbnailLayer dealloc]
-[QLSubThumbnailLayer drawInContext:]
-[QLSubThumbnailLayer containsPoint:]
-[QLDynamicThumbnailLayer init]
-[QLDynamicThumbnailLayer dealloc]
-[QLDynamicThumbnailLayer URL]
-[QLDynamicThumbnailLayer _updatePauseLock]
-[QLDynamicThumbnailLayer _setPlaceHolder]
-[QLDynamicThumbnailLayer _subthumbnailLayers]
-[QLDynamicThumbnailLayer _ql_layoutSublayers]
-[QLDynamicThumbnailLayer _reallyRemoveOldestSubthumbnail]
-[QLDynamicThumbnailLayer _removeOldestSubthumbnail]
-[QLDynamicThumbnailLayer _showNewestSubthumbnail]
-[QLDynamicThumbnailLayer appendSubThumbnail:]
-[QLDynamicThumbnailLayer _appendSubThumbnail:]
-[QLDynamicThumbnailLayer _thumbnailDone:]
-[QLDynamicThumbnailLayer _updateSubthumbnails]
-[QLDynamicThumbnailLayer setBounds:]
-[QLDynamicThumbnailLayer setContentsScale:]
-[QLDynamicThumbnailLayer _blockAndWaitIfNecessaryWithRequestIndex:]
-[QLDynamicThumbnailLayer _computeFolderContentsThumbnailsContinuously:requestIndex:]
-[QLDynamicThumbnailLayer _computeThumbnail:forURL:withUTIHint:requestIndex:]
-[QLDynamicThumbnailLayer _optimalThumbnailSize]
-[QLDynamicThumbnailLayer _dispatchRequestInfo]
___47-[QLDynamicThumbnailLayer _dispatchRequestInfo]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLDynamicThumbnailLayer setURL:]
-[QLDynamicThumbnailLayer loaded]
-[QLDynamicThumbnailLayer hitTest:]
-[QLDynamicThumbnailLayer handleMouseDownAtPoint:]
-[QLDynamicThumbnailLayer pause]
-[QLDynamicThumbnailLayer resume]
-[QLDynamicThumbnailLayer isPaused]
-[QLDynamicThumbnailLayer _realThumbnailSize]
-[QLDynamicThumbnailLayer thumbnailSize]
-[QLDynamicThumbnailLayer thumbnailContentFrame]
-[QLDynamicThumbnailLayer thumbnailImage]
-[QLDynamicThumbnailLayer recomputeThumbnailIfNeeded]
-[QLDynamicThumbnailLayer showPlaceholderAfterTimeout]
-[QLDynamicThumbnailLayer setShowPlaceholderAfterTimeout:]
-[QLDynamicThumbnailLayer minThumbnailSize]
-[QLDynamicThumbnailLayer setMinThumbnailSize:]
-[QLDynamicThumbnailLayer contentTypeUTIHint]
-[QLDynamicThumbnailLayer setContentTypeUTIHint:]
-[QLDynamicThumbnailLayer previewItem]
-[QLDynamicThumbnailLayer setPreviewItem:]
+[QLTimeSlider initialize]
+[QLTimeSlider mediaUIScrubber]
+[QLTimeSlider playImage]
+[QLTimeSlider pauseImage]
+[QLTimeSlider soundOnImage]
+[QLTimeSlider soundOffImage]
+[QLTimeSlider controlHeight]
+[QLTimeSlider buttonSize]
+[QLTimeSlider buttonsInterspace]
+[QLTimeSlider timeStringFromTimeInterval:longForm:]
-[QLTimeSlider optimizedDrawing]
-[QLTimeSlider initWithFrame:]
__quickLookMediaUI_setNeedsDisplayInRect
-[QLTimeSlider dealloc]
-[QLTimeSlider _CAViewFlags]
-[QLTimeSlider startControlWithDataSource:]
-[QLTimeSlider stopControl]
-[QLTimeSlider _updateRefreshTimer]
-[QLTimeSlider setAutoUpdates:]
-[QLTimeSlider autoUpdates]
-[QLTimeSlider _updateScrubber]
-[QLTimeSlider setNeedsUpdate:]
-[QLTimeSlider _timebarRect]
-[QLTimeSlider _buttonsRect]
-[QLTimeSlider _trackRect]
-[QLTimeSlider _timeRect]
-[QLTimeSlider _setupButtons]
-[QLTimeSlider _updateButtons]
-[QLTimeSlider _buttonTitleForTag:]
-[QLTimeSlider newButtonWithFrame:tag:title:]
-[QLTimeSlider _addButtonWithTag:inFrame:]
-[QLTimeSlider buttonClicked:]
-[QLTimeSlider resizeSubviewsWithOldSize:]
-[QLTimeSlider getTimeColorGrayComponents:]
-[QLTimeSlider drawRect:]
-[QLTimeSlider scrubberWillStartTracking:]
-[QLTimeSlider scrubberDidStopTracking:]
-[QLTimeSlider scrubber:willChangeValue:]
-[QLTimeSlider mouseDownCanMoveWindow]
-[QLTimeSlider mouseUp:]
-[QLTimeSlider observeValueForKeyPath:ofObject:change:context:]
-[QLTimeSlider accessibilityIsIgnored]
-[QLTimeSlider _setupUIElements]
-[QLTimeSlider accessibilityAttributeValue:]
-[QLTimeSlider accessibilityHitTest:]
-[QLTimeSlider accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:]
-[QLTimeSlider accessibilityAttributeValue:forUIElementWithIdentifier:]
-[QLTimeSlider accessibilitySetValue:forAttribute:forUIElementWithIdentifier:]
-[QLTimeSlider accessibilityIsAttributeSettable:forUIElementWithIdentifier:]
-[QLTimeSlider frameForUIElementWithIdentifier:]
-[QLTimeSlider accessibilityActionNamesForUIElementWithIdentifier:]
-[QLTimeSlider accessibilityPerformAction:forUIElementWithIdentifier:]
-[QLTimeSlider dataSource]
-[QLFullscreenTimeSlider optimizedDrawing]
-[QLFullscreenTimeSlider newButtonWithFrame:tag:title:]
-[QLFullscreenTimeSlider getTimeColorGrayComponents:]
+[QLSimpleTimeSlider _initQTKitIfNecessary]
+[QLSimpleTimeSlider qtUIKitStringWithName:]
+[QLSimpleTimeSlider controlHeight]
-[QLSimpleTimeSlider _QTUIDrawingOptions]
-[QLSimpleTimeSlider newButtonWithFrame:tag:title:]
-[QLSimpleTimeSlider getTimeColorGrayComponents:]
-[QLSimpleTimeSlider _trackRect]
-[QLSimpleTimeSlider drawRect:]
+[QLPreviewView(QLVNodes) vNodeURLWithPath:]
+[QLPreviewView(QLVNodes) isVNodeURL:]
+[QLPreviewView(QLVNodes) setVNodeDelegate:]
+[QLPathWatcher sharedWatcher]
-[QLPathWatcher init]
-[QLPathWatcher dealloc]
-[QLPathWatcher _watchedDictForURL:]
-[QLPathWatcher _setWatchedDict:forURL:]
-[QLPathWatcher _removeWatchedDictForURL:]
-[QLPathWatcher _invokeBlock:]
-[QLPathWatcher _signalEventsForURL:flags:]
___43-[QLPathWatcher _signalEventsForURL:flags:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPathWatcher _handleDispatchEventWithFlags:forWatchedDict:]
___62-[QLPathWatcher _handleDispatchEventWithFlags:forWatchedDict:]_block_invoke
___copy_helper_block_47
___destroy_helper_block_48
-[QLPathWatcher _initQueueIfNecessary]
-[QLPathWatcher addWatchedURL:client:]
___38-[QLPathWatcher addWatchedURL:client:]_block_invoke
___38-[QLPathWatcher addWatchedURL:client:]_block_invoke_2
___copy_helper_block_89
___destroy_helper_block_90
___38-[QLPathWatcher addWatchedURL:client:]_block_invoke93
___copy_helper_block_109
___destroy_helper_block_110
-[QLPathWatcher removeWatchedURL:client:]
___41-[QLPathWatcher removeWatchedURL:client:]_block_invoke
___copy_helper_block_132
___destroy_helper_block_133
-[QLPathWatcher _watcherDidWatchURL:flags:]
-[QLPathWatcher throttle]
-[QLPathWatcher setThrottle:]
+[QLDrawingHelpers _pathOfImageWithName:inBundle:]
+[QLDrawingHelpers loadCGImageNamed:fromBundle:into:]
+[QLDrawingHelpers loadNSImageNamed:fromBundle:into:]
+[QLDrawingHelpers imageNamed:]
+[QLDrawingHelpers CGImageNamed:]
+[QLDrawingHelpers CGImageNamed:fromBundle:]
+[QLDrawingHelpers imageNamed:fromBundle:]
+[QLDrawingHelpers cgColorWithRed:green:blue:alpha:]
+[QLDrawingHelpers cgColorWithRed:green:blue:]
+[QLDrawingHelpers cgColorWithColor:]
+[QLDrawingHelpers colorWithCGColor:colorSpace:]
+[QLAccessibilityUIElement elementWithIdentifier:delegate:]
-[QLAccessibilityUIElement dealloc]
-[QLAccessibilityUIElement accessibilityIsIgnored]
-[QLAccessibilityUIElement accessibilityAttributeNames]
-[QLAccessibilityUIElement accessibilityHitTest:]
-[QLAccessibilityUIElement accessibilityFocusedUIElement]
-[QLAccessibilityUIElement accessibilityAttributeValue:]
-[QLAccessibilityUIElement accessibilitySetValue:forAttribute:]
-[QLAccessibilityUIElement accessibilityIsAttributeSettable:]
-[QLAccessibilityUIElement accessibilityActionNames]
-[QLAccessibilityUIElement accessibilityActionDescription:]
-[QLAccessibilityUIElement accessibilityPerformAction:]
+[NSScreen(QuickLookAdditions) quickLook_screenContainingPoint:]
-[NSView(QuickLookAiddtions) _ql_convertLayerPointToViewPoint:]
-[NSView(QuickLookAiddtions) _ql_convertViewPointToLayerPoint:]
-[NSView(QuickLookAiddtions) _ql_convertLayerRectToViewRect:]
-[NSView(QuickLookAiddtions) _ql_convertViewRectToLayerRect:]
+[NSEvent(QuickLookAdditions) _ql_currentTimestamp]
-[QLTintedImageRep initWithImageRep:tintColor:rescale:]
-[QLTintedImageRep copyWithZone:]
-[QLTintedImageRep dealloc]
-[QLTintedImageRep draw]
-[NSImage(QuickLookAdditions) _ql_tintedImageWithColor:withSize:rescale:]
+[NSKeyedArchiver(QuickLookAdditions) _ql_secureArchivedDataWithRootObject:]
+[NSKeyedUnarchiver(QuickLookAdditions) _ql_secureUnarchiveObjectWithData:]
___75+[NSKeyedUnarchiver(QuickLookAdditions) _ql_secureUnarchiveObjectWithData:]_block_invoke
-[NSString(QLPreviewEscaping) _qlStringByAddingPercentEscapes]
+[QLPreviewURLProtocol initialize]
+[QLPreviewURLProtocol newUniqueURLWithName:]
+[QLPreviewURLProtocol newURLWithContentID:baseURL:]
+[QLPreviewURLProtocol registerPreview:forPreviewURL:]
___54+[QLPreviewURLProtocol registerPreview:forPreviewURL:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[QLPreviewURLProtocol registerURL:mimeType:textEncoding:]
___58+[QLPreviewURLProtocol registerURL:mimeType:textEncoding:]_block_invoke
___copy_helper_block_54
___destroy_helper_block_55
+[QLPreviewURLProtocol _errorForAbort]
+[QLPreviewURLProtocol _unregisterURL:]
+[QLPreviewURLProtocol unregisterURLs:andPreviewURL:]
___53+[QLPreviewURLProtocol unregisterURLs:andPreviewURL:]_block_invoke
___copy_helper_block_75
___destroy_helper_block_76
+[QLPreviewURLProtocol appendData:forURL:lastChunk:]
___52+[QLPreviewURLProtocol appendData:forURL:lastChunk:]_block_invoke
___copy_helper_block_95
___destroy_helper_block_96
+[QLPreviewURLProtocol setError:forURL:]
___40+[QLPreviewURLProtocol setError:forURL:]_block_invoke
___copy_helper_block_103
___destroy_helper_block_104
+[QLPreviewURLProtocol startLoadingProtocol:]
___45+[QLPreviewURLProtocol startLoadingProtocol:]_block_invoke
___copy_helper_block_139
___destroy_helper_block_140
+[QLPreviewURLProtocol stopLoadingProtocol:]
___44+[QLPreviewURLProtocol stopLoadingProtocol:]_block_invoke
___copy_helper_block_151
___destroy_helper_block_152
+[QLPreviewURLProtocol _dumpPendingProtocols]
___45+[QLPreviewURLProtocol _dumpPendingProtocols]_block_invoke
+[QLPreviewURLProtocol canInitWithRequest:]
+[QLPreviewURLProtocol canonicalRequestForRequest:]
+[QLPreviewURLProtocol requestIsCacheEquivalent:toRequest:]
-[QLPreviewURLProtocol startLoading]
-[QLPreviewURLProtocol stopLoading]
+[QLPreviewParts registerPreview:]
+[QLPreviewParts unregisterPreview:]
+[QLPreviewParts registeredPreviewForURL:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___42+[QLPreviewParts registeredPreviewForURL:]_block_invoke
___copy_helper_block_218
___destroy_helper_block_219
+[QLPreviewParts safeURLScheme]
+[QLPreviewParts isSafeURL:]
+[QLPreviewParts isSafeRequest:]
+[QLPreviewParts relativeStringForSafeURL:]
-[QLPreviewParts dealloc]
-[QLPreviewParts computePreview]
-[QLPreviewParts startComputingPreview]
-[QLPreviewParts computePreviewInThread]
-[QLPreviewParts _registerURL:mimeType:textEncoding:]
-[QLPreviewParts startDataRepresentationWithMimeType:textEncoding:]
-[QLPreviewParts startAttachmentWithURL:mimeType:textEncoding:]
-[QLPreviewParts isRegisteredURL:]
-[QLPreviewParts createAttachmentURLWithID:mimeType:textEncoding:]
-[QLPreviewParts createSafeAttachmentURLWithID:mimeType:textEncoding:]
-[QLPreviewParts appendData:forURL:lastChunk:]
-[QLPreviewParts previewRequest]
-[QLPreviewParts cfEncodingForAttachmentURL:]
-[QLPreviewParts previewURL]
-[QLImageAndTextPropertySlice dealloc]
-[QLImageAndTextPropertySlice initWithFrame:]
-[QLImageAndTextPropertySlice label]
-[QLImageAndTextPropertySlice setLabel:]
-[QLImageAndTextPropertySlice value]
-[QLImageAndTextPropertySlice setValue:]
-[QLLineView awakeFromNib]
-[QLLineView allowsVibrancy]
-[QLLineView wantsUpdateLayer]
-[QLLineView updateLayer]
+[QLPreviewScroller scrollerWidth]
+[QLPreviewScroller minKnobHeight]
+[QLPreviewScroller initialize]
+[QLPreviewScroller _aquaScrollerBehaviorChanged:]
-[QLPreviewScroller initWithFrame:]
-[QLPreviewScroller dealloc]
-[QLPreviewScroller _CAViewFlags]
-[QLPreviewScroller isFlipped]
-[QLPreviewScroller bind:toObject:withKeyPath:options:]
-[QLPreviewScroller unbind:]
-[QLPreviewScroller unbindAll]
-[QLPreviewScroller setTotalScroll:]
-[QLPreviewScroller setCurrentScroll:]
-[QLPreviewScroller numberOfPages]
-[QLPreviewScroller setNumberOfPages:]
+[QLPreviewScroller keyPathsForValuesAffectingCurrentPage]
-[QLPreviewScroller currentPage]
-[QLPreviewScroller setCurrentPage:]
-[QLPreviewScroller setFrameSize:]
-[QLPreviewScroller layoutSublayersOfLayer:]
-[QLPreviewScroller drawLayer:inContext:]
-[QLPreviewScroller actionForLayer:forKey:]
-[QLPreviewScroller _trackRect]
-[QLPreviewScroller _innerTrackRect]
-[QLPreviewScroller _knobRect]
-[QLPreviewScroller _showPageIndicatorWithAnchor:]
-[QLPreviewScroller _hidePageIndicator]
+[QLPreviewScroller keyPathsForValuesAffectingPageIndicatorText]
-[QLPreviewScroller pageIndicatorText]
-[QLPreviewScroller _updateScroll:]
-[QLPreviewScroller mouseDown:]
-[QLPreviewScroller mouseEntered:]
-[QLPreviewScroller mouseExited:]
-[QLPreviewScroller totalScroll]
-[QLPreviewScroller currentScroll]
-[QLPreviewScroller indicatorWindowLevel]
-[QLPreviewScroller setIndicatorWindowLevel:]
-[QLThumbnailRequestReserved dealloc]
-[QLThumbnailRequestReserved thumbnail]
-[QLThumbnailRequestReserved setThumbnail:]
-[QLThumbnailRequest initWithURL:maximumSize:options:]
-[QLThumbnailRequest dealloc]
-[QLThumbnailRequest URL]
-[QLThumbnailRequest maximumSize]
-[QLThumbnailRequest options]
-[QLThumbnailRequest dispatchInQueue:completionBlock:]
___54-[QLThumbnailRequest dispatchInQueue:completionBlock:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLThumbnailRequest image]
-[QLThumbnailRequest contentRect]
-[QLFocusBackgroundLayer init]
-[QLFocusBackgroundLayer setFocusFrame:]
-[QLFocusBackgroundLayer drawInContext:]
-[QLFocusBackgroundLayer focusFrame]
-[QLTransitionView isOpaque]
-[QLTransitionView dealloc]
-[QLTransitionView drawRect:]
-[QLTransitionView setTransitionImage:]
-[QLTransitionView transitionImage]
-[QLTransitionView transitionFrame]
-[QLTransitionView setTransitionFrame:]
-[QLPreviewImageWindow initWithContentRect:image:]
-[QLPreviewImageWindow image]
-[QLPreviewImageWindow setImage:]
-[QLTransitionCrossFadeView initWithFrame:]
-[QLTransitionCrossFadeView _CAViewFlags]
-[QLTransitionCrossFadeView isOpaque]
-[QLTransitionCrossFadeView sourceImage]
-[QLTransitionCrossFadeView destinationImage]
-[QLTransitionCrossFadeView setSourceImage:]
-[QLTransitionCrossFadeView setDestinationImage:]
-[QLTransitionCrossFadeView progress]
-[QLTransitionCrossFadeView setProgress:]
-[QLEventLessView hitTest:]
-[QLPreviewHUDWindow initWithContentRect:styleMask:backing:defer:]
-[QLPreviewHUDWindow updateShadow]
+[QLControlsPanel backgroundViewClass]
-[QLControlsPanel initWithContentRect:styleMask:backing:defer:]
-[QLControlsPanel _qlControllerCandidateForPreviewPanel:]
-[QLControlsPanel _qlIgnoreWindowForPreviewPanel:]
-[QLControlsPanel animationResizeTime:]
-[QLControlsPanel accessibilityIsIgnored]
-[QLIndexSheetController dealloc]
-[QLIndexSheetController _setup]
-[QLIndexSheetController _indexSheetTransitionLayerWithFrame:]
-[QLIndexSheetController setPreviewItems:withVisibleIndex:]
-[QLIndexSheetController activateIndexSheetWithAnimation:forItemAtIndex:]
-[QLIndexSheetController deactivateIndexSheetWithAnimation:forItemAtIndex:]
-[QLIndexSheetController _updateControls]
-[QLIndexSheetController _controlsActivated]
-[QLIndexSheetController _activateControls]
-[QLIndexSheetController _deactivateControls]
-[QLIndexSheetController _forwardToDelegate:]
-[QLIndexSheetController indexSheetWillActivate:]
-[QLIndexSheetController indexSheetDidActivate:]
-[QLIndexSheetController indexSheetWillDeactivate:]
-[QLIndexSheetController indexSheetDidDeactivate:]
-[QLIndexSheetController goToNextPage:]
-[QLIndexSheetController goToPreviousPage:]
+[QLIndexSheetController keyPathsForValuesAffectingStatus]
-[QLIndexSheetController status]
-[QLIndexSheetController view]
-[QLIndexSheetController respondsToSelector:]
-[QLIndexSheetController forwardingTargetForSelector:]
-[QLIndexSheetController delegate]
-[QLIndexSheetController setDelegate:]
-[QLIndexSheetController controlsController]
-[QLIndexSheetController setControlsController:]
_QLControlsCreateDictionary
+[QLCustomDisplayBundle customDisplayBundleForPreviewItem:owner:displayable:]
-[QLCustomDisplayBundle dealloc]
-[QLCustomDisplayBundle _updatePreviewItem]
-[QLCustomDisplayBundle cleanup]
-[QLCustomDisplayBundle loadWithHints:]
-[QLCustomDisplayBundle displayBundleID]
-[QLCustomDisplayBundle URL]
-[QLCustomDisplayBundle allowsNetworkAccess]
-[QLCustomDisplayBundle allowsJavascript]
-[QLCustomDisplayBundle allowsPlugIns]
-[QLCustomDisplayBundle allowsFileAccess]
-[QLCustomDisplayBundle allowsOpeningFileURLs]
-[QLCustomDisplayBundle willShow]
-[QLCustomDisplayBundle didShow]
-[QLCustomDisplayBundle willHide]
-[QLCustomDisplayBundle didHide]
-[QLCustomDisplayBundle quickLookView]
-[QLCustomDisplayBundle quickLookLayer]
-[QLCustomDisplayBundle isValidInPreviewMode:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingAutoplay]
-[QLCustomDisplayBundle autoplay]
+[QLCustomDisplayBundle keyPathsForValuesAffectingPlaying]
-[QLCustomDisplayBundle playing]
-[QLCustomDisplayBundle setPlaying:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingDuration]
-[QLCustomDisplayBundle duration]
+[QLCustomDisplayBundle keyPathsForValuesAffectingCurrentTime]
-[QLCustomDisplayBundle currentTime]
-[QLCustomDisplayBundle setCurrentTime:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingHasAudio]
-[QLCustomDisplayBundle hasAudio]
+[QLCustomDisplayBundle keyPathsForValuesAffectingMuted]
-[QLCustomDisplayBundle muted]
-[QLCustomDisplayBundle setMuted:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingVolume]
-[QLCustomDisplayBundle volume]
-[QLCustomDisplayBundle setVolume:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingNumberOfPages]
-[QLCustomDisplayBundle numberOfPages]
+[QLCustomDisplayBundle keyPathsForValuesAffectingCurrentPage]
-[QLCustomDisplayBundle currentPage]
-[QLCustomDisplayBundle setCurrentPage:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingTotalScroll]
-[QLCustomDisplayBundle totalScroll]
+[QLCustomDisplayBundle keyPathsForValuesAffectingCurrentScroll]
-[QLCustomDisplayBundle currentScroll]
-[QLCustomDisplayBundle setCurrentScroll:]
+[QLCustomDisplayBundle keyPathsForValuesAffectingTotalHorizontalScroll]
-[QLCustomDisplayBundle totalHorizontalScroll]
+[QLCustomDisplayBundle keyPathsForValuesAffectingCurrentHorizontalScroll]
-[QLCustomDisplayBundle currentHorizontalScroll]
-[QLCustomDisplayBundle setCurrentHorizontalScroll:]
-[QLCustomDisplayBundle displayable]
-[QLCustomDisplayBundle setDisplayable:]
-[QLCustomDisplayBundle previewItem]
-[QLCustomDisplayBundle setPreviewItem:]
-[QLPreviewPageNumberOverlayController dealloc]
-[QLPreviewPageNumberOverlayController setDataSource:]
-[QLPreviewPageNumberOverlayController _activatePageChangeObservation]
-[QLPreviewPageNumberOverlayController _deactivatePageChangeObservation]
-[QLPreviewPageNumberOverlayController observeValueForKeyPath:ofObject:change:context:]
-[QLPreviewPageNumberOverlayController _startShowingPageNumberOverlay]
-[QLPreviewPageNumberOverlayController _stopShowingPageNumberOverlay:]
-[QLPreviewPageNumberOverlayController hasRoundedCorners]
-[QLPreviewPageNumberOverlayController updateOverlayFrame]
-[QLPreviewPageNumberOverlayController dataSource]
-[QLPreviewPageNumberOverlayController displayTimer]
-[QLPreviewPageNumberOverlayController setDisplayTimer:]
-[QLVibrantGenericView allowsVibrancy]
+[QLImageAndTextDisplayBundle imageAndTextLayerClass]
-[QLImageAndTextDisplayBundle initWithPreview:owner:]
-[QLImageAndTextDisplayBundle dealloc]
-[QLImageAndTextDisplayBundle _attributedStringForValue:attributes:label:space:]
-[QLImageAndTextDisplayBundle updateText]
-[QLImageAndTextDisplayBundle title]
-[QLImageAndTextDisplayBundle subTitle]
-[QLImageAndTextDisplayBundle properties]
-[QLImageAndTextDisplayBundle topText]
-[QLImageAndTextDisplayBundle subTitleAttributes]
-[QLImageAndTextDisplayBundle titleAttributes]
-[QLImageAndTextDisplayBundle labelAttributes]
-[QLImageAndTextDisplayBundle valueAttributes]
-[QLImageAndTextDisplayBundle topTextAttributes]
-[QLImageAndTextDisplayBundle updateMetrics]
-[QLImageAndTextDisplayBundle defaultImageSize]
-[QLImageAndTextDisplayBundle modeDidChange]
-[QLImageAndTextDisplayBundle backingScaleFactorDidChange]
-[QLImageAndTextDisplayBundle highlighted]
-[QLImageAndTextDisplayBundle setHighlighted:]
-[QLImageAndTextDisplayBundle hasDarkBackground]
-[QLImageAndTextDisplayBundle hasLargeProperties]
-[QLImageAndTextDisplayBundle sizingConstraints]
-[QLImageAndTextDisplayBundle contentFrame]
-[QLImageAndTextDisplayBundle borderFrame]
-[QLImageAndTextDisplayBundle willStartLiveResize]
-[QLImageAndTextDisplayBundle didEndLiveResize]
-[QLImageAndTextDisplayBundle wantsLayer]
-[QLImageAndTextDisplayBundle setWantsLayer:]
-[QLImageAndTextDisplayBundle(Accessibility) accessibilityUIElements]
-[QLImageAndTextDisplayBundle(Accessibility) accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:]
-[QLImageAndTextDisplayBundle(Accessibility) accessibilityAttributeValue:forUIElementWithIdentifier:]
-[QLImageAndTextDisplayBundle(Accessibility) frameForUIElementWithIdentifier:]
+[QLRemoteDisplayBundle remoteDisplayBundleWithPreview:displayBundleID:owner:]
-[QLRemoteDisplayBundle initWithPreview:owner:]
-[QLRemoteDisplayBundle dealloc]
-[QLRemoteDisplayBundle _serializedObject:]
-[QLRemoteDisplayBundle _performBlock:]
-[QLRemoteDisplayBundle performBlockOnMainThread:]
-[QLRemoteDisplayBundle loadWithHints:]
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke41
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke_3
___copy_helper_block_51
___destroy_helper_block_52
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke55
___copy_helper_block_56
___destroy_helper_block_57
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke63
___copy_helper_block_66
___destroy_helper_block_67
___copy_helper_block_73
___destroy_helper_block_74
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke77
___copy_helper_block_88
___destroy_helper_block_89
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke92
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke_297
___copy_helper_block_102
___destroy_helper_block_103
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke147
___copy_helper_block_148
___destroy_helper_block_149
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke152
___copy_helper_block_153
___destroy_helper_block_154
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke_2160
___copy_helper_block_166
___destroy_helper_block_167
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke170
___copy_helper_block_171
___destroy_helper_block_172
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke175
___39-[QLRemoteDisplayBundle loadWithHints:]_block_invoke_2176
___copy_helper_block_179
___destroy_helper_block_180
___copy_helper_block_183
___destroy_helper_block_184
_QLRemotePreviewCallbacks_server_demux
___copy_helper_block_189
___destroy_helper_block_190
-[QLRemoteDisplayBundle _remotePreviewDidLoadWithContextID:properties:]
-[QLRemoteDisplayBundle _remotePreviewSizingUpdated]
-[QLRemoteDisplayBundle _remotePreviewDesistedWithHints:]
-[QLRemoteDisplayBundle _showPasswordUI]
-[QLRemoteDisplayBundle _helperProcessDidDie]
-[QLRemoteDisplayBundle _propertiesToForward]
-[QLRemoteDisplayBundle _startObserving]
-[QLRemoteDisplayBundle _stopObserving]
-[QLRemoteDisplayBundle _updatePropertiesFromRemote:]
___53-[QLRemoteDisplayBundle _updatePropertiesFromRemote:]_block_invoke
___copy_helper_block_245
___destroy_helper_block_246
-[QLRemoteDisplayBundle _setRemoteProperty:value:async:]
___56-[QLRemoteDisplayBundle _setRemoteProperty:value:async:]_block_invoke
___copy_helper_block_252
___destroy_helper_block_253
___56-[QLRemoteDisplayBundle _setRemoteProperty:value:async:]_block_invoke256
___56-[QLRemoteDisplayBundle _setRemoteProperty:value:async:]_block_invoke_2
___copy_helper_block_257
___destroy_helper_block_258
___56-[QLRemoteDisplayBundle _setRemoteProperty:value:async:]_block_invoke261
___copy_helper_block_262
___destroy_helper_block_263
___copy_helper_block_266
___destroy_helper_block_267
-[QLRemoteDisplayBundle observeValueForKeyPath:ofObject:change:context:]
-[QLRemoteDisplayBundle _forwardAction:]
___40-[QLRemoteDisplayBundle _forwardAction:]_block_invoke
___40-[QLRemoteDisplayBundle _forwardAction:]_block_invoke_2
___copy_helper_block_278
___destroy_helper_block_279
___copy_helper_block_282
___destroy_helper_block_283
-[QLRemoteDisplayBundle _updateActivationState:]
___48-[QLRemoteDisplayBundle _updateActivationState:]_block_invoke
___48-[QLRemoteDisplayBundle _updateActivationState:]_block_invoke_2
___copy_helper_block_286
___destroy_helper_block_287
___copy_helper_block_290
___destroy_helper_block_291
-[QLRemoteDisplayBundle activate]
-[QLRemoteDisplayBundle deactivate]
-[QLRemoteDisplayBundle discard]
-[QLRemoteDisplayBundle cleanup]
___32-[QLRemoteDisplayBundle cleanup]_block_invoke
___copy_helper_block_308
___destroy_helper_block_309
-[QLRemoteDisplayBundle willOpen]
-[QLRemoteDisplayBundle didOpen]
-[QLRemoteDisplayBundle refreshSynchronously]
-[QLRemoteDisplayBundle _forwardEvent:]
___39-[QLRemoteDisplayBundle _forwardEvent:]_block_invoke
___39-[QLRemoteDisplayBundle _forwardEvent:]_block_invoke_2
___copy_helper_block_324
___destroy_helper_block_325
___copy_helper_block_328
___destroy_helper_block_329
-[QLRemoteDisplayBundle scrollWheel:]
-[QLRemoteDisplayBundle magnifyWithEvent:]
-[QLRemoteDisplayBundle smartMagnifyWithEvent:]
-[QLRemoteDisplayBundle mouseDown:]
-[QLRemoteDisplayBundle mouseDragged:]
-[QLRemoteDisplayBundle mouseUp:]
-[QLRemoteDisplayBundle beginGestureWithEvent:]
-[QLRemoteDisplayBundle endGestureWithEvent:]
-[QLRemoteDisplayBundle isClickablePoint:]
___42-[QLRemoteDisplayBundle isClickablePoint:]_block_invoke
___42-[QLRemoteDisplayBundle isClickablePoint:]_block_invoke_2
___copy_helper_block_336
___destroy_helper_block_337
___copy_helper_block_340
___destroy_helper_block_341
-[QLRemoteDisplayBundle setQuickLookFrame:]
___43-[QLRemoteDisplayBundle setQuickLookFrame:]_block_invoke
___43-[QLRemoteDisplayBundle setQuickLookFrame:]_block_invoke_2
___copy_helper_block_346
___destroy_helper_block_347
___43-[QLRemoteDisplayBundle setQuickLookFrame:]_block_invoke350
___copy_helper_block_351
___destroy_helper_block_352
___copy_helper_block_355
___destroy_helper_block_356
-[QLRemoteDisplayBundle willStartLiveResize]
-[QLRemoteDisplayBundle didEndLiveResize]
-[QLRemoteDisplayBundle quickLookView]
-[QLRemoteDisplayBundle quickLookLayer]
-[QLRemoteDisplayBundle contentLayer]
-[QLRemoteDisplayBundle _remotePropertyValueForKey:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___52-[QLRemoteDisplayBundle _remotePropertyValueForKey:]_block_invoke
___52-[QLRemoteDisplayBundle _remotePropertyValueForKey:]_block_invoke_2
___copy_helper_block_361
___destroy_helper_block_362
___copy_helper_block_368
___destroy_helper_block_369
-[QLRemoteDisplayBundle customDisplayName]
-[QLRemoteDisplayBundle overlayVisibilityOptions]
-[QLRemoteDisplayBundle keepThumbnailUnderInlinePreview]
-[QLRemoteDisplayBundle scalable]
-[QLRemoteDisplayBundle sizingConstraints]
-[QLRemoteDisplayBundle autoplay]
-[QLRemoteDisplayBundle launchURL]
-[QLRemoteDisplayBundle modeDidChange]
-[QLRemoteDisplayBundle backingScaleFactorDidChange]
-[QLRemoteDisplayBundle hostedInWindowServerDidChange]
-[QLRemoteDisplayBundle windowKeyDidChange]
-[QLRemoteDisplayBundle globalOriginDidChange]
-[QLRemoteDisplayBundle copyImageRepresentationWithFrame:]
___58-[QLRemoteDisplayBundle copyImageRepresentationWithFrame:]_block_invoke
___58-[QLRemoteDisplayBundle copyImageRepresentationWithFrame:]_block_invoke_2
___copy_helper_block_423
___destroy_helper_block_424
___copy_helper_block_427
___destroy_helper_block_428
-[QLRemoteDisplayBundle generateThumbnailForPage:maxSize:completionBlock:]
___74-[QLRemoteDisplayBundle generateThumbnailForPage:maxSize:completionBlock:]_block_invoke
___74-[QLRemoteDisplayBundle generateThumbnailForPage:maxSize:completionBlock:]_block_invoke_2
___copy_helper_block_438
___destroy_helper_block_439
___copy_helper_block_444
___destroy_helper_block_445
-[QLRemoteDisplayBundle _generatedThumbnail:forPage:]
-[QLRemoteDisplayBundle updatingFromRemoteDisplayBundle]
-[QLRemoteDisplayBundle setUpdatingFromRemoteDisplayBundle:]
-[QLRemoteDisplayBundle displayFlags]
-[QLRemoteDisplayBundle highlighted]
-[QLRemoteDisplayBundle setHighlighted:]
-[QLRemoteDisplayBundle canBeReused]
-[QLRemoteDisplayBundle prefersLocalEventLoop]
-[QLRemoteDisplayBundle playing]
-[QLRemoteDisplayBundle setPlaying:]
-[QLRemoteDisplayBundle duration]
-[QLRemoteDisplayBundle currentTime]
-[QLRemoteDisplayBundle setCurrentTime:]
-[QLRemoteDisplayBundle hasAudio]
-[QLRemoteDisplayBundle muted]
-[QLRemoteDisplayBundle setMuted:]
-[QLRemoteDisplayBundle volume]
-[QLRemoteDisplayBundle setVolume:]
-[QLRemoteDisplayBundle numberOfPages]
-[QLRemoteDisplayBundle currentPage]
-[QLRemoteDisplayBundle setCurrentPage:]
-[QLRemoteDisplayBundle pageDisplay]
-[QLRemoteDisplayBundle defaultPageThumbnailRatio]
-[QLRemoteDisplayBundle showScrollerToChangePages]
-[QLRemoteDisplayBundle totalScroll]
-[QLRemoteDisplayBundle currentScroll]
-[QLRemoteDisplayBundle setCurrentScroll:]
-[QLRemoteDisplayBundle totalHorizontalScroll]
-[QLRemoteDisplayBundle currentHorizontalScroll]
-[QLRemoteDisplayBundle setCurrentHorizontalScroll:]
-[QLRemoteDisplayBundle contentFrame]
-[QLRemoteDisplayBundle opaqueFrame]
-[QLRemoteDisplayBundle borderFrame]
-[QLRemoteDisplayBundle backgroundStyle]
-[QLRemoteDisplayBundle openingApplicationInfo]
-[QLRemoteDisplayBundle displayBundleID]
-[QLRemoteDisplayBundle setDisplayBundleID:]
-[QLRemoteDisplayBundle(Accessibility) resetAccessibility]
-[QLRemoteDisplayBundle(Accessibility) accessibilityUIElements]
___63-[QLRemoteDisplayBundle(Accessibility) accessibilityUIElements]_block_invoke
___63-[QLRemoteDisplayBundle(Accessibility) accessibilityUIElements]_block_invoke_2
___copy_helper_block_590
___destroy_helper_block_591
___copy_helper_block_594
___destroy_helper_block_595
-[QLRemoteDisplayBundle(Accessibility) accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:]
-[QLRemoteDisplayBundle(Accessibility) accessibilityAttributeValue:forUIElementWithIdentifier:]
__QLRemotePreviewCallbackLoaded
____QLRemotePreviewCallbackLoaded_block_invoke
____QLRemotePreviewCallbackLoaded_block_invoke_2
___copy_helper_block_621
___destroy_helper_block_622
___copy_helper_block_625
___destroy_helper_block_626
__QLRemotePreviewCallbackSizingUpdated
____QLRemotePreviewCallbackSizingUpdated_block_invoke
____QLRemotePreviewCallbackSizingUpdated_block_invoke_2
___copy_helper_block_632
___destroy_helper_block_633
__QLRemotePreviewCallbackRemoteDesisted
____QLRemotePreviewCallbackRemoteDesisted_block_invoke
____QLRemotePreviewCallbackRemoteDesisted_block_invoke_2
___copy_helper_block_639
___destroy_helper_block_640
___copy_helper_block_643
___destroy_helper_block_644
__QLRemotePreviewCallbackNeedPassword
____QLRemotePreviewCallbackNeedPassword_block_invoke
____QLRemotePreviewCallbackNeedPassword_block_invoke_2
___copy_helper_block_648
___destroy_helper_block_649
__QLRemotePreviewCallbackPropertiesUpdated
____QLRemotePreviewCallbackPropertiesUpdated_block_invoke
____QLRemotePreviewCallbackPropertiesUpdated_block_invoke_2
___copy_helper_block_654
___destroy_helper_block_655
___copy_helper_block_658
___destroy_helper_block_659
__QLRemotePreviewCallbackPageThumbnailGenerated
____QLRemotePreviewCallbackPageThumbnailGenerated_block_invoke
____QLRemotePreviewCallbackPageThumbnailGenerated_block_invoke_2
___copy_helper_block_662
___destroy_helper_block_663
_QLRemotePreviewCallbacks_server_routine
__XLoaded
__XSizingUpdated
__XRemoteDesisted
__XNeedPassword
__XPropertiesUpdated
__XPageThumbnailGenerated
_QLRemotePreviewCallbacks_server
__QLRemotePreviewRequestCreatePreview
__QLRemotePreviewRequestReloadPreview
__QLRemotePreviewRequestChangeActivationState
__QLRemotePreviewRequestSendSimpleAction
__QLRemotePreviewRequestSetSize
__QLRemotePreviewRequestSetProperties
__QLRemotePreviewRequestGetProperty
__QLRemotePreviewRequestCopyImageRepresentation
__QLRemotePreviewRequestGeneratePageThumbnail
__QLRemotePreviewRequestHandleEvent
__QLRemotePreviewRequestIsClickablePoint
__QLRemotePreviewRequestCopyAccessibilityElements
+[QLMediaUIScrubber initialize]
-[QLMediaUIScrubber exposedBindings]
-[QLMediaUIScrubber initWithFrame:]
-[QLMediaUIScrubber initWithCoder:]
-[QLMediaUIScrubber encodeWithCoder:]
-[QLMediaUIScrubber minValue]
-[QLMediaUIScrubber setMinValue:]
-[QLMediaUIScrubber maxValue]
-[QLMediaUIScrubber setMaxValue:]
-[QLMediaUIScrubber currentValue]
-[QLMediaUIScrubber setCurrentValue:]
-[QLMediaUIScrubber valueTiming]
-[QLMediaUIScrubber setValueTiming:]
-[QLMediaUIScrubber lowerBoundForValue:]
_QLMediaUIScrubberGetValueBounds
-[QLMediaUIScrubber upperBoundForValue:]
-[QLMediaUIScrubber isFlipped]
-[QLMediaUIScrubber _QTUIDrawingOptions]
-[QLMediaUIScrubber getKnobRect:trackRect:]
-[QLMediaUIScrubber knobRect]
-[QLMediaUIScrubber trackRect]
-[QLMediaUIScrubber mouseDown:]
_QLMediaUIScrubberInvokeAction
-[QLMediaUIScrubber setNeedsDisplay]
-[QLMediaUIScrubber drawRect:]
-[QLMediaUIScrubber moveRight:]
_QLMediaUIScrubberNudgeUp
-[QLMediaUIScrubber moveUp:]
-[QLMediaUIScrubber pageUp:]
-[QLMediaUIScrubber moveDown:]
_QLMediaUIScrubberNudgeDown
-[QLMediaUIScrubber moveLeft:]
-[QLMediaUIScrubber pageDown:]
-[QLMediaUIScrubber delegate]
-[QLMediaUIScrubber setDelegate:]
-[QLMediaUIScrubber(NSAccessibility) accessibilityAttributeNames]
-[QLMediaUIScrubber(NSAccessibility) accessibilityAttributeValue:]
-[QLMediaUIScrubber(NSAccessibility) accessibilityIsAttributeSettable:]
-[QLMediaUIScrubber(NSAccessibility) accessibilitySetValue:forAttribute:]
-[QLMediaUIScrubber(NSAccessibility) accessibilityActionNames]
-[QLMediaUIScrubber(NSAccessibility) accessibilityActionDescription:]
-[QLMediaUIScrubber(NSAccessibility) accessibilityPerformAction:]
_QLMediaUIScrubberSetValueFromUserAction
-[QLSeamlessOpenerReserved dealloc]
-[QLSeamlessOpenerReserved finalize]
+[QLSeamlessOpener initialize]
+[QLSeamlessOpener seamlessOpenerWithDelegate:]
-[QLSeamlessOpener init]
-[QLSeamlessOpener dealloc]
-[QLSeamlessOpener launchFlags]
-[QLSeamlessOpener setLaunchFlags:]
-[QLSeamlessOpener setDelegate:]
-[QLSeamlessOpener delegate]
-[QLSeamlessOpener setCloserDelegate:]
-[QLSeamlessOpener closerDelegate]
-[QLSeamlessOpener setAdditionalAnimatingItems:]
-[QLSeamlessOpener additionalAnimatingItems]
-[QLSeamlessOpener setSearchString:]
-[QLSeamlessOpener searchString]
-[QLSeamlessOpener additionalEventParamDescriptor]
-[QLSeamlessOpener setAdditionalEventParamDescriptor:]
-[QLSeamlessOpener passThruParams]
-[QLSeamlessOpener setPassThruParams:]
-[QLSeamlessOpener applicationURL]
-[QLSeamlessOpener setApplicationURL:]
-[QLSeamlessOpener _displayTransientWindowWithTransientImage:frame:level:]
-[QLSeamlessOpener _closeTransientWindowWithAnimation:]
___55-[QLSeamlessOpener _closeTransientWindowWithAnimation:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLSeamlessOpener _checkToCloseTransientWindowWithAnimation:]
___62-[QLSeamlessOpener _checkToCloseTransientWindowWithAnimation:]_block_invoke
___copy_helper_block_92
___destroy_helper_block_93
___62-[QLSeamlessOpener _checkToCloseTransientWindowWithAnimation:]_block_invoke99
___copy_helper_block_103
___destroy_helper_block_104
-[QLSeamlessOpener beginShowingTransientWindow]
-[QLSeamlessOpener endShowingTransientWindowShouldAnimate:]
-[QLSeamlessOpener _openItems:async:local:realAppPID:]
__NSSavePanelCopyWindowOrderingGroup
___54-[QLSeamlessOpener _openItems:async:local:realAppPID:]_block_invoke
___54-[QLSeamlessOpener _openItems:async:local:realAppPID:]_block_invoke_2
___copy_helper_block_225
___destroy_helper_block_226
___54-[QLSeamlessOpener _openItems:async:local:realAppPID:]_block_invoke229
___copy_helper_block_230
___destroy_helper_block_231
___54-[QLSeamlessOpener _openItems:async:local:realAppPID:]_block_invoke236
___copy_helper_block_237
___destroy_helper_block_238
___54-[QLSeamlessOpener _openItems:async:local:realAppPID:]_block_invoke241
___copy_helper_block_244
___destroy_helper_block_245
___copy_helper_block_248
___destroy_helper_block_249
-[QLSeamlessOpener openItems:]
-[QLSeamlessOpener openItemsSynchronously:]
-[QLSeamlessOpener openLocalItems:]
-[QLSeamlessOpener openLocalItems:realApplicationPID:]
+[QLSeamlessOpener _enableScreenUpdates]
-[QLSeamlessOpener description]
-[QLSeamlessOpener _frameForWID:]
+[QLSeamlessOpener invalidateCloserDelegate:]
__QLSeamlessOpeningCreateSeamlessOpening
__QLSeamlessOpeningBindDocumentToApplication
__QLSeamlessOpeningDiscard
__QLSeamlessOpeningIsSeamlesslyOpeningDocuments
__QLSeamlessOpeningCreateDocumentOpener
__QLSeamlessOpeningShowLoadingWindow
__QLSeamlessOpeningGetDocumentInformation
__QLSeamlessOpeningGetDisplayState
__QLSeamlessOpeningNoteDocumentOpened
__QLSeamlessOpeningSetDocumentLoadingProgress
__QLSeamlessOpeningDiscardAllSeamlessOpeningsForPID
__QLSeamlessOpeningShowClosingAnimation
-[QLPreviewBubbleReserved dealloc]
-[QLPreviewBubbleReserved finalize]
+[QLPreviewBubble presentBubbleForItem:parentWindow:itemFrame:maximumSize:preferredEdge:]
+[QLPreviewBubble presentBubbleForItem:parentWindow:itemFrame:maximumSize:preferredEdge:filterMask:autocloseMask:]
___114+[QLPreviewBubble presentBubbleForItem:parentWindow:itemFrame:maximumSize:preferredEdge:filterMask:autocloseMask:]_block_invoke
-[QLPreviewBubble init]
-[QLPreviewBubble dealloc]
-[QLPreviewBubble _activateEventMonitor]
-[QLPreviewBubble _deactivateEventMonitor]
-[QLPreviewBubble setAutomaticallyCloseWithMask:filterMask:block:]
___66-[QLPreviewBubble setAutomaticallyCloseWithMask:filterMask:block:]_block_invoke
___66-[QLPreviewBubble setAutomaticallyCloseWithMask:filterMask:block:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_113
___destroy_helper_block_114
-[QLPreviewBubble close]
-[QLPreviewBubble _itemFrameOnScreen]
-[QLPreviewBubble _animateShow]
-[QLPreviewBubble _animateHide]
-[QLPreviewBubble _bubbleOptions]
-[QLPreviewBubble _launchURL]
-[QLPreviewBubble _seamlesslyOpenWithURL:]
-[QLPreviewBubble _doubleClickEvent:]
-[QLPreviewBubble _buttonClickEvent:]
-[QLPreviewBubble _willOpenURLEvent:]
-[QLPreviewBubble _didLoad]
-[QLPreviewBubble _updateModesIfNecessary]
___42-[QLPreviewBubble _updateModesIfNecessary]_block_invoke
___copy_helper_block_207
___destroy_helper_block_208
-[QLPreviewBubble _makeQueueIfNecessary]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___40-[QLPreviewBubble _makeQueueIfNecessary]_block_invoke
___copy_helper_block_220
___destroy_helper_block_221
___40-[QLPreviewBubble _makeQueueIfNecessary]_block_invoke225
___copy_helper_block_228
___destroy_helper_block_229
___40-[QLPreviewBubble _makeQueueIfNecessary]_block_invoke233
___copy_helper_block_236
___destroy_helper_block_237
___40-[QLPreviewBubble _makeQueueIfNecessary]_block_invoke241
___copy_helper_block_244
___destroy_helper_block_245
-[QLPreviewBubble runLoopModes]
___Block_byref_object_copy_248
___Block_byref_object_dispose_249
___31-[QLPreviewBubble runLoopModes]_block_invoke
___copy_helper_block_250
___destroy_helper_block_251
-[QLPreviewBubble setRunLoopModes:]
___35-[QLPreviewBubble setRunLoopModes:]_block_invoke
___copy_helper_block_254
___destroy_helper_block_255
-[QLPreviewBubble setPreloadedItems:]
-[QLPreviewBubble preloadedItems]
-[QLPreviewBubble setControls:]
-[QLPreviewBubble controls]
-[QLPreviewBubble effectiveControls]
-[QLPreviewBubble contentSnapshot]
-[QLPreviewBubble makeBubble]
-[QLPreviewBubble _updateBubbleShow:]
-[QLPreviewBubble maximumSize]
-[QLPreviewBubble setMaximumSize:]
-[QLPreviewBubble maxArea]
-[QLPreviewBubble setMaxArea:]
-[QLPreviewBubble preferredEdge]
-[QLPreviewBubble setPreferredEdge:]
-[QLPreviewBubble usedEdge]
-[QLPreviewBubble autoplays]
-[QLPreviewBubble setAutoplays:]
-[QLPreviewBubble forcePreferredEdge]
-[QLPreviewBubble setForcePreferredEdge:]
-[QLPreviewBubble skipAnimationInvoke]
-[QLPreviewBubble setSkipAnimationInvoke:]
-[QLPreviewBubble skipAlphaDuringOpenAnimation]
-[QLPreviewBubble setSkipAlphaDuringOpenAnimation:]
-[QLPreviewBubble _windowDidMove]
-[QLPreviewBubble _windowWillClose]
-[QLPreviewBubble _windowWillMiniaturize]
-[QLPreviewBubble _applicationWillDeactivate]
-[QLPreviewBubble _breakWithParentWindow]
-[QLPreviewBubble _linkWithParentWindow]
-[QLPreviewBubble parentWindow]
-[QLPreviewBubble setParentWindow:]
-[QLPreviewBubble level]
-[QLPreviewBubble setLevel:]
-[QLPreviewBubble aimPoint]
-[QLPreviewBubble setAimPoint:]
-[QLPreviewBubble isVisible]
-[QLPreviewBubble setVisible:]
-[QLPreviewBubble previewItem]
-[QLPreviewBubble setPreviewItem:]
-[QLPreviewBubble animationType]
-[QLPreviewBubble setAnimationType:]
-[QLPreviewBubble itemFrame]
-[QLPreviewBubble setItemFrame:]
-[QLPreviewBubble animationSourceFrame]
-[QLPreviewBubble setAnimationSourceFrame:]
-[QLPreviewBubble animationContentFrame]
-[QLPreviewBubble setAnimationContentFrame:]
-[QLPreviewBubble bubbleWindowID]
-[QLPreviewBubble delegate]
-[QLPreviewBubble setDelegate:]
-[QLPreviewBubble showPreviewItem:itemFrame:]
-[QLPreviewBubble setDisplayPath:additionalString:]
___51-[QLPreviewBubble setDisplayPath:additionalString:]_block_invoke
___copy_helper_block_331
___destroy_helper_block_332
+[QLPreviewBubble setGlobalSeamlesslyOpening:]
-[QLPreviewBubble isSeamlesslyOpening]
-[QLPreviewBubble seamlessOpener:sourceBubbleForPreviewItem:]
-[QLPreviewBubble _checkSeamlesslyOpening]
-[QLPreviewBubble setSeamlesslyOpening:]
-[QLPreviewBubble bubbleRef]
-[QLPreviewBubble show:]
-[QLPreviewBubble hide:]
-[QLControlSegment initWithFrame:]
-[QLControlSegment initWithFrame:andSegmentedControl:]
-[QLControlSegment dealloc]
-[QLControlSegment control]
-[QLControlSegment _controlPressed]
-[QLControlSegment sendAction:to:]
-[QLControlSegment _updateStyle]
-[QLControlSegment setStyle:]
-[QLControlSegment setImage:]
-[QLControlSegment image]
-[QLControlSegment originalImage]
-[QLControlSegment isHidden]
-[QLControlSegment setHidden:]
-[QLControlSegment setEnabled:]
-[QLControlSegment isEnabled]
-[QLControlSegment toolTip]
-[QLControlSegment setToolTip:]
-[QLControlSegment setShown:]
-[QLControlSegment setTitle:]
-[QLControlSegment title]
-[QLControlSegment setMenuProvider:]
-[QLControlSegment menuProvider]
-[QLControlSegment setControlIdentifier:]
-[QLControlSegment controlIdentifier]
-[QLControlSegment buttonWidth]
-[QLControlSegment setButtonWidth:]
-[QLControlSegment _updateTooltip]
-[QLControlSegment observeValueForKeyPath:ofObject:change:context:]
-[QLControlSegment alternate]
-[QLControlSegment setAlternate:]
-[QLControlSegment sendActionOnMouseDown]
-[QLControlSegment setSendActionOnMouseDown:]
-[QLControlSegment isShown]
-[QLControlSegment style]
-[QLControlSegment segmentedStyle]
-[QLControlSegment setSegmentedStyle:]
-[QLControlSegment tooltipMargin]
-[QLControlSegment setTooltipMargin:]
-[QLControlSegment keyEquivalent]
-[QLControlSegment setKeyEquivalent:]
-[QLControlSegment frame]
-[QLControlSegment setFrame:]
-[QLControlSegment segmentedControl]
-[QLControlSegment setSegmentedControl:]
-[QLControlSegment segmentIndex]
-[QLControlSegment setSegmentIndex:]
-[QLControlSegment common]
-[QLControlSegment setCommon:]
-[QLControlSegment action]
-[QLControlSegment setAction:]
-[QLControlSegment target]
-[QLControlSegment setTarget:]
+[NSMutableArray(WeakReferences) ql_mutableArrayUsingWeakReferences]
+[NSMutableArray(WeakReferences) ql_mutableArrayUsingWeakReferencesWithCapacity:]
-[QLControlSegmentedControl initWithFrame:]
-[QLControlSegmentedControl dealloc]
-[QLControlSegmentedControl segmentedControlPressed:]
-[QLControlSegmentedControl updateSegment:forWindow:]
-[QLControlSegmentedControl addSegment:]
-[QLControlSegmentedControl removeSegment:]
-[QLControlSegmentedControl segmentForEvent:]
-[QLControlSegmentedControl mouseEntered:]
-[QLControlSegmentedControl mouseExited:]
-[QLControlSegmentedControl rightMouseDown:]
-[QLControlSegmentedControl viewWillMoveToWindow:]
-[QLControlSegmentedControl viewDidMoveToWindow]
-[QLControlSegmentedControl viewDidHide]
-[QLControlSegmentedControl viewDidUnhide]
-[QLControlSegmentedControl MediaUI_slice]
+[QLSeamlessOpeningFakeCloserDelegate closerDelegate]
-[QLSeamlessOpeningFakeCloserDelegate registerInfo:forPreviewItem:]
-[QLSeamlessOpeningFakeCloserDelegate infoForPreviewItem:]
-[QLSeamlessOpeningFakeCloserDelegate seamlessCloserSourcePreviewViewForPreviewItem:]
-[QLSeamlessOpeningFakeCloserDelegate seamlessCloserSourceFrameOnScreenForPreviewItem:]
-[QLSeamlessOpeningFakeCloserDelegate seamlessCloserTransitionImageForPreviewItem:contentRect:windowLevel:]
+[QLSeamlessItemOpener itemOpenerForPreviewItem:fromOpener:]
-[QLSeamlessItemOpener dealloc]
-[QLSeamlessItemOpener _supportWithMaxSupport:]
-[QLSeamlessItemOpener _displayStateFromViewDisplayState:fullscreen:screenFrame:]
-[QLSeamlessItemOpener _viewDisplayStateFromDisplayState:]
-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___72-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___72-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]_block_invoke202
___copy_helper_block_206
___destroy_helper_block_207
___72-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]_block_invoke226
___copy_helper_block_231
___destroy_helper_block_232
___72-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]_block_invoke236
___copy_helper_block_246
___destroy_helper_block_247
___72-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]_block_invoke251
___copy_helper_block_259
___destroy_helper_block_260
___72-[QLSeamlessItemOpener openWithOptions:fromPreviewPanel:minWindowLevel:]_block_invoke270
___copy_helper_block_271
___destroy_helper_block_272
-[QLSeamlessItemOpener bindToPID:]
-[QLSeamlessItemOpener discard]
___31-[QLSeamlessItemOpener discard]_block_invoke
___copy_helper_block_279
___destroy_helper_block_280
-[QLSeamlessItemOpener _invalidateWithSuccess:]
-[QLSeamlessItemOpener _displayLegacyOpeningAnimationWithSourceImage:frame:fromPreviewPanel:]
___93-[QLSeamlessItemOpener _displayLegacyOpeningAnimationWithSourceImage:frame:fromPreviewPanel:]_block_invoke
___copy_helper_block_319
___destroy_helper_block_320
-[QLSeamlessItemOpener delegate]
-[QLSeamlessItemOpener _performBlock:]
-[QLSeamlessItemOpener description]
-[QLSeamlessItemOpener item]
-[QLSeamlessItemOpener setItem:]
-[QLSeamlessItemOpener opener]
-[QLSeamlessItemOpener setOpener:]
__QLAbsoluteFrameWithContentFrame
__QLAdjustedFrameForTargetFrame
-[NSWindow(QuickLookDeferred) _ql_windowNumberCreateIfNeeded]
-[QLWindowEffect initWithWindow:]
-[QLWindowEffect dealloc]
-[QLWindowEffect finalize]
-[QLWindowEffect prepare]
-[QLWindowEffect invoke]
-[QLWindowEffect _restoreChildWindows]
-[QLWindowEffect abort]
-[QLWindowEffect done]
-[QLWindowEffect windowDidUpdate]
-[QLWindowEffect setPreparationBlock:]
-[QLWindowEffect preparationBlock]
-[QLWindowEffect setCompletionBlock:]
-[QLWindowEffect completionBlock]
-[QLWindowEffect window]
-[QLWindowEffect setWindow:]
-[QLWindowEffect effectID]
-[QLWindowEffect setEffectID:]
-[QLCGWindowEffect initWithWindow:parameters:duration:]
__transitionFinishedNotification
-[QLCGWindowEffect invoke]
+[QLRotateWindowEffect rotateWindow:withNewContentView:direction:duration:]
+[QLBlendWindowEffect blendWindow:withNewContentView:duration:]
+[QLSlideWindowEffect slideWindow:withNewContentView:direction:duration:]
+[QLShrinkWindowEffect shrinkWindow:duration:]
-[QLAnimationWindowEffect setAnimation:]
-[QLAnimationWindowEffect animation]
-[QLAnimationWindowEffect initWithWindow:animation:]
-[QLAnimationWindowEffect dealloc]
-[QLAnimationWindowEffect prepare]
-[QLAnimationWindowEffect invoke]
-[QLAnimationWindowEffect stop]
-[QLAnimationWindowEffect abort]
-[QLAnimationWindowEffect invertWithCompletionBlock:]
-[QLAnimationWindowEffect done]
-[QLAnimationWindowEffect setWindow:]
-[QLAnimationWindowEffect additionalDuration]
-[QLAnimationWindowEffect setProgress:]
-[QLAnimationWindowEffect _setProgress:]
-[QLAnimationWindowEffect progress]
-[QLAnimationWindowEffect setInverted:]
-[QLAnimationWindowEffect inverted]
-[QLAnimationWindowEffect setValue:]
-[QLAnimationWindowEffect subEffectWithID:]
-[QLAnimationWindowEffect animationDidEnd:]
-[QLAnimationWindowEffect subEffects]
-[QLAnimationWindowEffect setSubEffects:]
-[QLWindowAnimation copyWithZone:]
-[QLWindowAnimation discardWindowEffect]
-[QLWindowAnimation windowEffect]
-[QLWindowAnimation setCurrentProgress:]
-[QLWindowAnimation currentValue]
+[QLGenericAnimationEffect genericAnimationForObject:key:duration:]
-[QLGenericAnimationEffect dealloc]
-[QLGenericAnimationEffect setValue:]
+[QLFadeWindowEffect fadeWindow:fromAlpha:toAlpha:duration:]
-[QLFadeWindowEffect setValue:]
-[QLFadeWindowEffect done]
-[QLFadeWindowEffect restoreAlpha]
-[QLFadeWindowEffect setRestoreAlpha:]
+[QLPlopWindowEffect plopWindow:duration:]
-[QLPlopWindowEffect prepare]
-[QLPlopWindowEffect setValue:]
-[QLPlopWindowEffect done]
+[QLPropertyWindowEffect changeProperty:forWindow:from:to:duration:]
-[QLPropertyWindowEffect dealloc]
-[QLPropertyWindowEffect setValue:]
+[QLTransformWindowEffect transformWindow:from:to:duration:]
-[QLTransformWindowEffect animation:valueForProgress:]
-[QLTransformWindowEffect setValue:]
+[QLWarpingWindowEffect warpingEffectForWindow:duration:]
-[QLWarpingWindowEffect dealloc]
-[QLWarpingWindowEffect finalize]
-[QLWarpingWindowEffect prepare]
-[QLWarpingWindowEffect animation:valueForProgress:]
-[QLWarpingWindowEffect setValue:]
-[QLWarpingWindowEffect setSetupBlock:]
-[QLWarpingWindowEffect setupBlock]
-[QLWarpingWindowEffect setPointBlock:]
-[QLWarpingWindowEffect pointBlock]
+[QLScaleWindowEffect scaleWindow:fromFrame:toFrame:duration:]
+[QLScaleWindowEffect deformWindowWithID:connection:fullFrame:scaleFrame:currentFrame:currentScaleFrame:]
-[QLScaleWindowEffect initialFrame]
-[QLScaleWindowEffect setInitialFrame:]
-[QLScaleWindowEffect finalFrame]
-[QLScaleWindowEffect setFinalFrame:]
-[QLScaleWindowEffect additionalDuration]
-[QLScaleWindowEffect prepare]
-[QLScaleWindowEffect done]
-[QLScaleWindowEffect animation:valueForProgress:]
-[QLScaleWindowEffect setWindowFrame:]
-[QLScaleWindowEffect setValue:]
-[QLScaleWindowEffect resizeWindow]
-[QLScaleWindowEffect setResizeWindow:]
-[QLScaleWindowEffect autoAdaptDuration]
-[QLScaleWindowEffect setAutoAdaptDuration:]
-[QLPopWindowEffect animation:valueForProgress:]
-[QLPopWindowEffect setValue:]
-[QLNonUniformScaleWindowEffect prepare]
-[QLNonUniformScaleWindowEffect _adjustedFrameFromFrame:value:currentScaleFrame:]
-[QLNonUniformScaleWindowEffect additionalDuration]
-[QLNonUniformScaleWindowEffect setValue:]
-[QLNonUniformScaleWindowEffect scaleFrame]
-[QLNonUniformScaleWindowEffect setScaleFrame:]
-[QLNonUniformScalePopWindowEffect animation:valueForProgress:]
-[QLScalePopWindowEffect animation:valueForProgress:]
-[QLMultiZoomScaleWindowEffect _scaleFrameFromFrame:]
-[QLMultiZoomScaleWindowEffect prepare]
-[QLMultiZoomScaleWindowEffect additionalDuration]
-[QLMultiZoomScaleWindowEffect setValue:]
+[QLTransitionWindow transitionWindowWithFrame:forWindow:]
-[QLTransitionWindow initWithContentRect:styleMask:backing:defer:]
-[QLTransitionWindow _ql_isQuickLookInternalWindow]
+[QLWindowEffectsLibrary _newTransitionWindowWithFrame:forWindow:]
+[QLWindowEffectsLibrary scaleEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]
___125+[QLWindowEffectsLibrary scaleEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___125+[QLWindowEffectsLibrary scaleEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke83
___copy_helper_block_88
___destroy_helper_block_89
+[QLWindowEffectsLibrary scalePopEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]
___128+[QLWindowEffectsLibrary scalePopEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke
___copy_helper_block_101
___destroy_helper_block_102
___128+[QLWindowEffectsLibrary scalePopEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke105
___copy_helper_block_106
___destroy_helper_block_107
+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke
___copy_helper_block_114
___destroy_helper_block_115
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke121
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke_2
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke_3
___copy_helper_block_132
___destroy_helper_block_133
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke136
___copy_helper_block_137
___destroy_helper_block_138
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke168
___copy_helper_block_169
___destroy_helper_block_170
___125+[QLWindowEffectsLibrary morphEffectWithWindow:itemFrame:image:itemContentFrame:windowContentFrame:duration:transitionOnTop:]_block_invoke173
___copy_helper_block_174
___destroy_helper_block_175
-[QLPreviewSchemeHandler_http initWithPreviewItem:]
-[QLPreviewSchemeHandler_http _calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_http serviceGOOGLE_MAPSPreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_http serviceAPPLE_MAPSPreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_http calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_http filteredControlsFromControls:]
-[QLPreviewSchemeHandler_dict calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_dict _dictionaryStyleSheetURL]
-[QLPreviewSchemeHandler_tel calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_tel icon]
-[QLPreviewSchemeHandler_tel seamlessOpeningSupport]
-[QLPreviewSchemeHandler_messaging calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_messaging seamlessOpeningSupport]
-[QLPreviewSchemeHandler_distantfs calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_distantfs icon]
-[QLPreviewSchemeHandler_map _mapURLWithDirections:]
-[QLPreviewSchemeHandler_map calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_map launchURL]
-[QLPreviewSchemeHandler_map filteredControlsFromControls:]
___59-[QLPreviewSchemeHandler_map filteredControlsFromControls:]_block_invoke
-[QLPreviewSchemeHandler_maplegacy _mapURL]
-[QLPreviewSchemeHandler_maplegacy launchURL]
-[QLPreviewSchemeHandler_event calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_event launchURL]
-[QLPreviewSchemeHandler_event seamlessOpeningSupport]
-[QLPreviewSchemeHandler_addressbook calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler_addressbook seamlessOpeningSupport]
+[QLPreviewSchemeHandler initialize]
+[QLPreviewSchemeHandler registerHandlerClass:forScheme:]
+[QLPreviewSchemeHandler isURLReachable:]
-[QLPreviewSchemeHandler initWithPreviewItem:]
-[QLPreviewSchemeHandler URL]
-[QLPreviewSchemeHandler launchURL]
-[QLPreviewSchemeHandler seamlessOpeningSupport]
-[QLPreviewSchemeHandler previewItem]
+[QLPreviewSchemeHandler handlerForPreviewItem:]
+[QLPreviewSchemeHandler _handlerForScheme:item:]
-[QLPreviewSchemeHandler calculatePreviewURL:previewData:previewProperties:previewType:]
-[QLPreviewSchemeHandler createImageFromIconForMaximumSize:]
___60-[QLPreviewSchemeHandler createImageFromIconForMaximumSize:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPreviewSchemeHandler icon]
-[QLPreviewSchemeHandler createImageForMaximumSize:options:]
-[QLPreviewSchemeHandler filteredControlsFromControls:]
__SimplifiedHostNameForSuffix
___Block_byref_object_copy_
___Block_byref_object_dispose_
____SynchronousSafariShortURLForURL_block_invoke
___copy_helper_block_414
___destroy_helper_block_415
+[QLSeamlessDocumentOpener _resetHelperActiveState]
+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning]
___51+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning]_block_invoke
___51+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___51+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning]_block_invoke6
___51+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning]_block_invoke_29
___copy_helper_block_10
___destroy_helper_block_11
___51+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning]_block_invoke14
___copy_helper_block_15
___destroy_helper_block_16
___copy_helper_block_21
___destroy_helper_block_22
+[QLSeamlessDocumentOpener _discardAllActiveOpeners]
+[QLSeamlessDocumentOpener _checkSeamlessOpeningState]
___54+[QLSeamlessDocumentOpener _checkSeamlessOpeningState]_block_invoke
___54+[QLSeamlessDocumentOpener _checkSeamlessOpeningState]_block_invoke_2
+[QLSeamlessDocumentOpener _someWindowWillOrderOnScreen:]
+[QLSeamlessDocumentOpener initialize]
+[QLSeamlessDocumentOpener _pushSeamlessEventForURL:]
+[QLSeamlessDocumentOpener _popSeamlessEventForURL:]
+[QLSeamlessDocumentOpener _pushShowWindow:forURL:]
+[QLSeamlessDocumentOpener _popShowWindow:forURL:]
+[QLSeamlessDocumentOpener isSeamlesslyOpeningDocuments]
___56+[QLSeamlessDocumentOpener isSeamlesslyOpeningDocuments]_block_invoke
___56+[QLSeamlessDocumentOpener isSeamlesslyOpeningDocuments]_block_invoke_2
___copy_helper_block_126
___destroy_helper_block_127
___copy_helper_block_130
___destroy_helper_block_131
+[QLSeamlessDocumentOpener setIgnorePIDCheck:]
+[QLSeamlessDocumentOpener seamlessDocumentOpenerForURL:]
+[QLSeamlessDocumentOpener seamlessApplicationOpenerForURL:]
-[QLSeamlessDocumentOpener initWithURL:]
-[QLSeamlessDocumentOpener dealloc]
-[QLSeamlessDocumentOpener beginDocumentOpening]
-[QLSeamlessDocumentOpener endDocumentOpening]
-[QLSeamlessDocumentOpener deferDocumentLoading]
-[QLSeamlessDocumentOpener beginDocumentLoading]
-[QLSeamlessDocumentOpener showLoadingWindow]
-[QLSeamlessDocumentOpener setLoadingProgress:]
-[QLSeamlessDocumentOpener loadingProgress]
-[QLSeamlessDocumentOpener endDocumentLoading]
-[QLSeamlessDocumentOpener deferDocumentShowing]
-[QLSeamlessDocumentOpener _beginShowingWindow:effect:]
-[QLSeamlessDocumentOpener showWindow:contentFrame:withBlock:]
-[QLSeamlessDocumentOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]
-[QLSeamlessDocumentOpener displayState]
-[QLSeamlessDocumentOpener transitionImage]
-[QLSeamlessDocumentOpener isAnimating]
-[QLSeamlessDocumentOpener isOpening]
-[QLSeamlessDocumentOpener setAutomaticallyAdjustWindowPosition:]
-[QLSeamlessDocumentOpener automaticallyAdjustWindowPosition]
-[QLSeamlessDocumentOpener URL]
-[QLSeamlessDocumentConcreteOpener initWithURL:]
___48-[QLSeamlessDocumentConcreteOpener initWithURL:]_block_invoke
___48-[QLSeamlessDocumentConcreteOpener initWithURL:]_block_invoke_2
___copy_helper_block_224
___destroy_helper_block_225
___48-[QLSeamlessDocumentConcreteOpener initWithURL:]_block_invoke232
___48-[QLSeamlessDocumentConcreteOpener initWithURL:]_block_invoke_2233
___copy_helper_block_234
___destroy_helper_block_235
___copy_helper_block_238
___destroy_helper_block_239
___copy_helper_block_242
___destroy_helper_block_243
-[QLSeamlessDocumentConcreteOpener dealloc]
-[QLSeamlessDocumentConcreteOpener discard]
___43-[QLSeamlessDocumentConcreteOpener discard]_block_invoke
___copy_helper_block_260
___destroy_helper_block_261
-[QLSeamlessDocumentConcreteOpener _startDeferredTimeout]
___57-[QLSeamlessDocumentConcreteOpener _startDeferredTimeout]_block_invoke
___copy_helper_block_271
___destroy_helper_block_272
-[QLSeamlessDocumentConcreteOpener _stopDeferredTimeout]
-[QLSeamlessDocumentConcreteOpener beginDocumentOpening]
-[QLSeamlessDocumentConcreteOpener endDocumentOpening]
-[QLSeamlessDocumentConcreteOpener deferDocumentLoading]
-[QLSeamlessDocumentConcreteOpener beginDocumentLoading]
-[QLSeamlessDocumentConcreteOpener showLoadingWindow]
___53-[QLSeamlessDocumentConcreteOpener showLoadingWindow]_block_invoke
___copy_helper_block_295
___destroy_helper_block_296
-[QLSeamlessDocumentConcreteOpener setLoadingProgress:]
___55-[QLSeamlessDocumentConcreteOpener setLoadingProgress:]_block_invoke
___55-[QLSeamlessDocumentConcreteOpener setLoadingProgress:]_block_invoke_2
___copy_helper_block_303
___destroy_helper_block_304
___copy_helper_block_309
___destroy_helper_block_310
-[QLSeamlessDocumentConcreteOpener loadingProgress]
-[QLSeamlessDocumentConcreteOpener endDocumentLoading]
-[QLSeamlessDocumentConcreteOpener deferDocumentShowing]
-[QLSeamlessDocumentConcreteOpener showWindow:contentFrame:withBlock:]
-[QLSeamlessDocumentConcreteOpener _noteDocumentOpenedWithWindow:]
___66-[QLSeamlessDocumentConcreteOpener _noteDocumentOpenedWithWindow:]_block_invoke
___copy_helper_block_327
___destroy_helper_block_328
-[QLSeamlessDocumentConcreteOpener _beginShowingWindow:effect:]
___63-[QLSeamlessDocumentConcreteOpener _beginShowingWindow:effect:]_block_invoke
___copy_helper_block_346
___destroy_helper_block_347
-[QLSeamlessDocumentConcreteOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]
___89-[QLSeamlessDocumentConcreteOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]_block_invoke
___89-[QLSeamlessDocumentConcreteOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]_block_invoke_2
___copy_helper_block_365
___destroy_helper_block_366
___copy_helper_block_369
___destroy_helper_block_370
___89-[QLSeamlessDocumentConcreteOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]_block_invoke405
___copy_helper_block_407
___destroy_helper_block_408
___89-[QLSeamlessDocumentConcreteOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]_block_invoke416
___copy_helper_block_421
___destroy_helper_block_422
___89-[QLSeamlessDocumentConcreteOpener _endShowingWindow:contentFrame:alreadyVisible:effect:]_block_invoke429
___copy_helper_block_430
___destroy_helper_block_431
-[QLSeamlessDocumentConcreteOpener displayState]
___48-[QLSeamlessDocumentConcreteOpener displayState]_block_invoke
___48-[QLSeamlessDocumentConcreteOpener displayState]_block_invoke_2
___copy_helper_block_436
___destroy_helper_block_437
___copy_helper_block_440
___destroy_helper_block_441
-[QLSeamlessDocumentConcreteOpener transitionImage]
-[QLSeamlessDocumentConcreteOpener isAnimating]
-[QLSeamlessDocumentConcreteOpener isOpening]
-[QLSeamlessDocumentConcreteOpener description]
-[QLSeamlessDocumentConcreteOpener automaticallyAdjustWindowPosition]
-[QLSeamlessDocumentConcreteOpener setAutomaticallyAdjustWindowPosition:]
-[QLImageAndTextViewController awakeFromNib]
-[QLImageAndTextViewController addPropertySlice:]
-[QLImageAndTextViewController dealloc]
-[QLImageAndTextViewController titleField]
-[QLImageAndTextViewController setTitleField:]
-[QLImageAndTextViewController subTitleField]
-[QLImageAndTextViewController setSubTitleField:]
-[QLImageAndTextViewController iconView]
-[QLImageAndTextViewController setIconView:]
-[QLImageAndTextViewController propertySlice1]
-[QLImageAndTextViewController setPropertySlice1:]
-[QLImageAndTextViewController slicesContainerView]
-[QLImageAndTextViewController setSlicesContainerView:]
-[QLImageAndTextViewController lastSliceToBottomConstraint]
-[QLImageAndTextViewController setLastSliceToBottomConstraint:]
-[QLImageAndTextViewController propertySlices]
+[QLUIHelperObject mapTable]
-[QLUIHelperObject setPort:]
-[QLUIHelperObject port]
-[QLUIHelperObject invalidate]
+[QLUIHelperObject objectForPort:]
-[QLUIHelperObject serverPort]
-[QLUIHelperObject setServerPort:]
+[QLProgressIndicatorLayer defaultActionForKey:]
-[QLProgressIndicatorLayer actionForLayer:forKey:]
-[QLProgressIndicatorLayer init]
-[QLProgressIndicatorLayer grayLevel]
-[QLProgressIndicatorLayer numberOfBars]
-[QLProgressIndicatorLayer drawInContext:]
-[QLProgressIndicatorLayer drawLayer:inContext:]
-[QLProgressIndicatorLayer setCircular:]
-[QLProgressIndicatorLayer setProgressValue:]
-[QLProgressIndicatorLayer _setDeterminate:]
+[QLProgressIndicatorLayer keyPathsForValuesAffectingIsDeterminate]
-[QLProgressIndicatorLayer isDeterminate]
-[QLProgressIndicatorLayer animates]
-[QLProgressIndicatorLayer setAnimates:]
-[QLProgressIndicatorLayer setContentsScale:]
-[QLProgressIndicatorLayer circular]
-[QLProgressIndicatorLayer whiteColor]
-[QLProgressIndicatorLayer setWhiteColor:]
-[QLProgressIndicatorLayer progressValue]
-[QLPreviewPathOverlayController init]
-[QLPreviewPathOverlayController dealloc]
-[QLPreviewPathOverlayController setPathString:]
-[QLPreviewPathOverlayController _hasPathString]
-[QLPreviewPathOverlayController _activateEventMonitor]
___55-[QLPreviewPathOverlayController _activateEventMonitor]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPreviewPathOverlayController eventMonitor]
-[QLPreviewPathOverlayController setEventMonitor:]
+[QLThumbnailLayer initialize]
___30+[QLThumbnailLayer initialize]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLThumbnailLayer initWithPreviewItem:]
-[QLThumbnailLayer dealloc]
-[QLThumbnailLayer setPreviewItem:]
-[QLThumbnailLayer previewItem]
-[QLThumbnailLayer hasThumbnail]
-[QLThumbnailLayer setImageContents:]
-[QLThumbnailLayer imageContents]
-[QLThumbnailLayer update]
___26-[QLThumbnailLayer update]_block_invoke
___copy_helper_block_34
___destroy_helper_block_35
-[QLThumbnailLayer createImageForMaximumSize:options:]
-[QLThumbnailLayer discard]
-[QLThumbnailLayer thumbnail:computedImage:]
-[QLThumbnailLayer _thumbnailingDone:]
___38-[QLThumbnailLayer _thumbnailingDone:]_block_invoke
___copy_helper_block_57
___destroy_helper_block_58
-[QLThumbnailLayer thumbnailFrame]
-[QLThumbnailLayer contentRect]
-[QLThumbnailLayer actionForKey:]
-[QLThumbnailLayer removeFromSuperlayer]
-[QLThumbnailLayer thumbnailMaxSize]
-[QLThumbnailLayer thumbnailSize]
-[QLThumbnailLayer iconMode]
-[QLThumbnailLayer setIconMode:]
____QLSeamlessOpeningSupportForRunningApplication_block_invoke
____QLSeamlessOpeningSupportForRunningApplication_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
-[QLControlCommon initWithQLControl:]
-[QLControlCommon dealloc]
-[QLControlCommon setupTrackingArea]
-[QLControlCommon tearDownTrackingArea]
-[QLControlCommon tearDown]
-[QLControlCommon _showTooltipWithText:]
-[QLControlCommon closeTooltip]
-[QLControlCommon imageButton]
-[QLControlCommon updateTooltip]
-[QLControlCommon processImage:]
___32-[QLControlCommon processImage:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLControlCommon updateTitle]
-[QLControlCommon setControlIdentifier:]
-[QLControlCommon setMenuProvider:]
-[QLControlCommon menuProvider]
-[QLControlCommon sizeToFit]
-[QLControlCommon _showButtonMenuWithEvent:]
___44-[QLControlCommon _showButtonMenuWithEvent:]_block_invoke
___copy_helper_block_181
___destroy_helper_block_182
-[QLControlCommon _showButtonMenuFromTimer:]
-[QLControlCommon mouseDown:]
-[QLControlCommon rightMouseDown:]
-[QLControlCommon qlcontrol]
-[QLControlCommon controlIdentifier]
__QLSpecialCaseSeamlessOpeningContentFrame
__QLSpecialCaseSeamlessOpeningSupport
__QLSpecialCaseSeamlessOpeningAutomaticallyAdjustWindowPosition
__QLSpecialCaseApplyDisplayState
-[QLModernAquaHUDBackgroudView mouseDownCanMoveWindow]
-[QLModernAquaHUDBackgroudView initWithFrame:]
-[QLModernAquaHUDBackgroudView allowsVibrancy]
-[QLPreviewDocument initWithPreviewItem:forPreviewView:]
-[QLPreviewDocument dealloc]
-[QLPreviewDocument _setupPreviewWithURL:contentType:hints:]
-[QLPreviewDocument startLoading]
-[QLPreviewDocument startLoadingWithForcedDisplayBundleID:hints:]
___65-[QLPreviewDocument startLoadingWithForcedDisplayBundleID:hints:]_block_invoke
___65-[QLPreviewDocument startLoadingWithForcedDisplayBundleID:hints:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_102
___destroy_helper_block_103
-[QLPreviewDocument _bundleMustLoadInWindow:]
-[QLPreviewDocument _hintsWithPreviewViewForWebviewPreloading:]
-[QLPreviewDocument cancelPreview]
-[QLPreviewDocument invalidate]
-[QLPreviewDocument willTimeOut]
-[QLPreviewDocument _loadWithDisplayBundleID:hints:remoteMode:]
-[QLPreviewDocument _fallbackLoadWithError:]
-[QLPreviewDocument _didEndLoading]
-[QLPreviewDocument _loadPreviewSucceeded]
-[QLPreviewDocument _loadPreviewMismatchedWithExpectedDisplayBundleID:hints:]
-[QLPreviewDocument _loadPreviewFailedWithError:]
-[QLPreviewDocument _loadPreviewFailedDueToPasswordProtection]
+[QLPreviewDocument keyPathsForValuesAffectingNumberOfPages]
-[QLPreviewDocument numberOfPages]
-[QLPreviewDocument generateThumbnailForPage:maxSize:completionBlock:]
-[QLPreviewDocument drawPage:inRect:context:]
-[QLPreviewDocument stringForPage:]
-[QLPreviewDocument findOccurrencesOfString:inPage:withOptions:]
-[QLPreviewDocument highlightedOccurrences]
-[QLPreviewDocument setHighlightedOccurrences:]
-[QLPreviewDocument focusedOccurrenceIndex]
-[QLPreviewDocument setFocusedOccurrenceIndex:]
-[QLPreviewDocument setFocusedOccurrenceIndex:inPage:]
+[QLPreviewDocument keyPathsForValuesAffectingIsLoaded]
-[QLPreviewDocument isLoaded]
-[QLPreviewDocument isGeneric]
+[QLPreviewDocument keyPathsForValuesAffectingDisplayable]
-[QLPreviewDocument displayable]
-[QLPreviewDocument preview]
-[QLPreviewDocument previewItem]
-[QLPreviewDocument previewView]
-[QLPreviewDocument setPreviewView:]
-[QLPreviewDocument loadingDisplayBundle]
-[QLPreviewDocument setLoadingDisplayBundle:]
-[QLPreviewDocument displayBundle]
-[QLPreviewDocument setDisplayBundle:]
-[QLPreviewDocument displayState]
-[QLPreviewDocument setState:]
-[QLPreviewDocument state]
-[QLPreviewDocument setExternalDocument:]
-[QLPreviewDocument isExternalDocument]
-[QLPreviewDocument setPassword:]
-[QLPreviewDocument password]
+[QLPreviewDocument keyPathsForValuesAffectingMode]
-[QLPreviewDocument mode]
+[QLPreviewDocument keyPathsForValuesAffectingFlavor]
-[QLPreviewDocument flavor]
+[QLPreviewDocument keyPathsForValuesAffectingBounds]
-[QLPreviewDocument bounds]
+[QLPreviewDocument keyPathsForValuesAffectingVisualMargins]
-[QLPreviewDocument visualMargins]
+[QLPreviewDocument keyPathsForValuesAffectingIsRemote]
-[QLPreviewDocument isRemote]
+[QLPreviewDocument keyPathsForValuesAffectingIsHostedInWindowServer]
-[QLPreviewDocument isHostedInWindowServer]
+[QLPreviewDocument keyPathsForValuesAffectingIsWindowKey]
-[QLPreviewDocument isWindowKey]
+[QLPreviewDocument keyPathsForValuesAffectingInLiveResize]
-[QLPreviewDocument inLiveResize]
+[QLPreviewDocument keyPathsForValuesAffectingShouldUseHardwareCodec]
-[QLPreviewDocument shouldUseHardwareCodec]
+[QLPreviewDocument keyPathsForValuesAffectingAllowsAlerts]
-[QLPreviewDocument allowsAlerts]
+[QLPreviewDocument keyPathsForValuesAffectingCurrentURL]
-[QLPreviewDocument currentURL]
-[QLPreviewDocument startWatchingURL:]
-[QLPreviewDocument stopWatchingURL:]
-[QLPreviewDocument shouldOpenURL:]
-[QLPreviewDocument openExternalURL:]
-[QLPreviewDocument viewForEvent:]
-[QLPreviewDocument locationForEvent:]
-[QLPreviewDocument convertRectToScreen:]
-[QLPreviewDocument convertPointToScreen:]
-[QLPreviewDocument convertRectFromScreen:]
-[QLPreviewDocument convertPointFromScreen:]
-[QLPreviewDocument tracksMouseMovements]
-[QLPreviewDocument setTracksMouseMovements:]
-[QLPreviewDocument backingScaleFactor]
-[QLPreviewDocument globalOrigin]
-[QLPreviewDocument screen]
-[QLPreviewDocument displayBundleDidLoad:]
-[QLPreviewDocument displayBundleDidMismatchLoading:withHints:expectedDisplayBundleID:]
-[QLPreviewDocument displayBundleFailedToLoad:withError:]
-[QLPreviewDocument displayBundleDidDesistRemote:expectedDisplayBundleID:]
-[QLPreviewDocument displayBundle:requestReloadAndFallbackWithError:]
-[QLPreviewDocument displayBundleSizingUpdated:]
-[QLPreviewDocument displayBundleCustomTitleUpdated:]
-[QLPreviewDocument description]
-[QLPreviewDocument(Accessibility) accessibilityIsIgnored]
-[QLPreviewDocument(Accessibility) accessibilityAttributeNames]
-[QLPreviewDocument(Accessibility) accessibilityAttributeValue:]
-[QLPreviewCustomDocument initWithPreviewItem:customView:forPreviewView:]
-[QLPreviewCustomDocument dealloc]
-[QLPreviewCustomDocument startLoadingWithForcedDisplayBundleID:hints:]
+[QLiPhotoExport loadImageKitFrameworkIfNeeded]
+[QLiPhotoExport sharedSlideshow]
+[QLiPhotoExport iPhotoBundleIdentifier]
+[QLiPhotoExport addDocumentWithURLToIPhoto:]
+[QLiPhotoExport canExportToIPhoto]
-[QLPreviewPageLoadingLayer numberOfBars]
-[QLPreviewPageLoadingLayer hitTest:]
-[QLPreviewPageLayer init]
-[QLPreviewPageLayer setContentsScale:]
-[QLPreviewPageLayer setHighlightMode:]
-[QLPreviewPageLayer setGenerating:]
-[QLPreviewPageLayer setPageContents:]
-[QLPreviewPageLayer done]
-[QLPreviewPageLayer layoutSublayers]
-[QLPreviewPageLayer navigationView]
-[QLPreviewPageLayer setNavigationView:]
-[QLPreviewPageLayer page]
-[QLPreviewPageLayer setPage:]
-[QLPreviewPageLayer highlightMode]
-[QLPreviewPageLayer generating]
-[QLPreviewPageNavigationView initWithFrame:]
-[QLPreviewPageNavigationView _CAViewFlags]
-[QLPreviewPageNavigationView dealloc]
-[QLPreviewPageNavigationView setDataSource:]
-[QLPreviewPageNavigationView dataSource]
-[QLPreviewPageNavigationView setEnableUpdates:]
-[QLPreviewPageNavigationView enableUpdates]
-[QLPreviewPageNavigationView acceptsFirstResponder]
-[QLPreviewPageNavigationView becomeFirstResponder]
-[QLPreviewPageNavigationView resignFirstResponder]
-[QLPreviewPageNavigationView mustHandleEvent:]
-[QLPreviewPageNavigationView _getFullHeight:visibleHeight:]
-[QLPreviewPageNavigationView _updateScroll]
-[QLPreviewPageNavigationView _scrollToValue:animate:]
___54-[QLPreviewPageNavigationView _scrollToValue:animate:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPreviewPageNavigationView _selectedHighlightMode]
-[QLPreviewPageNavigationView _setCurrentPage:]
-[QLPreviewPageNavigationView _pageLayerForPage:]
-[QLPreviewPageNavigationView _pageSize]
-[QLPreviewPageNavigationView _updatePages]
-[QLPreviewPageNavigationView _updatePageThumbnails]
___52-[QLPreviewPageNavigationView _updatePageThumbnails]_block_invoke
___copy_helper_block_221
___destroy_helper_block_222
-[QLPreviewPageNavigationView drawDrawingLayer:inContext:]
-[QLPreviewPageNavigationView mouseDown:]
-[QLPreviewPageNavigationView mouseDownCanMoveWindow]
-[QLPreviewPageNavigationView resizeWithOldSuperviewSize:]
-[QLPreviewPageNavigationView scrollWheel:]
-[QLPreviewPageNavigationView observeValueForKeyPath:ofObject:change:context:]
+[QLPreviewPageNavigationView keyPathsForValuesAffectingVerticalScrollValue]
-[QLPreviewPageNavigationView verticalScrollValue]
-[QLPreviewPageNavigationView setVerticalScrollValue:]
+[QLPreviewPageNavigationView keyPathsForValuesAffectingVerticalKnobProportion]
-[QLPreviewPageNavigationView verticalKnobProportion]
-[QLPreviewPageNavigationView viewWillMoveToWindow:]
-[QLPreviewPageNavigationView scaleFactorDidChange:]
-[QLPreviewPageNavigationView(Accessibility) accessibilityIsIgnored]
-[QLPreviewPageNavigationView(Accessibility) accessibilityHitTest:]
-[QLPreviewPageNavigationView(Accessibility) accessibilityAttributeNames]
-[QLPreviewPageNavigationView(Accessibility) accessibilityIsAttributeSettable:]
-[QLPreviewPageNavigationView(Accessibility) accessibilityAttributeValue:]
-[QLPreviewPageLayer(Accessibility) accessibilityIsIgnored]
-[QLPreviewPageLayer(Accessibility) accessibilityAttributeNames]
-[QLPreviewPageLayer(Accessibility) accessibilityIsAttributeSettable:]
-[QLPreviewPageLayer(Accessibility) accessibilityAttributeValue:]
-[QLPreviewPageLayer(Accessibility) accessibilityActionNames]
-[QLPreviewPageLayer(Accessibility) accessibilityActionDescription:]
-[QLPreviewPageLayer(Accessibility) accessibilityPerformAction:]
-[QLPreviewBackgroundView alignmentRectInsets]
-[QLPreviewBackgroundView setArrowEdge:]
-[QLPreviewBackgroundView arrowEdge]
-[QLPreviewBackgroundView setArrowPosition:]
-[QLPreviewBackgroundView arrowPosition]
-[QLPreviewBackgroundView flushWindow]
+[QLPreviewBackgroundView sheetRectFromRect:]
+[QLPreviewBackgroundView adjustWindowFrame:arrowPosition:inContainingFrame:edge:itemFrame:aimPoint:]
-[QLPreviewTitleCell _textAttributes]
-[QLPreviewTitleCell textAlignment]
-[QLPreviewTitleCell setTextAlignment:]
_QLPreviewSetupWindow
+[QLSeamlessDocumentCloser seamlessDocumentCloserForWindow:]
+[QLSeamlessDocumentCloser seamlessApplicationCloser]
+[QLSeamlessDocumentCloser setupCloserForWindow:withLauncherPort:]
-[QLSeamlessDocumentCloser closeWithContentFrame:block:]
+[QLSeamlessDocumentCloser seamlessDocumentCloserForURL:]
-[QLSeamlessDocumentCloser dealloc]
-[QLSeamlessDocumentCloser closeWindow:contentFrame:withBlock:]
-[QLSeamlessDocumentCloser displayState]
-[QLSeamlessDocumentCloser setDisplayState:]
-[QLSeamlessDocumentCloser isAnimating]
-[QLSeamlessDocumentConcreteCloser dealloc]
-[QLSeamlessDocumentConcreteCloser isAnimating]
-[QLSeamlessDocumentConcreteCloser closeWithContentFrame:block:]
___64-[QLSeamlessDocumentConcreteCloser closeWithContentFrame:block:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___64-[QLSeamlessDocumentConcreteCloser closeWithContentFrame:block:]_block_invoke71
___64-[QLSeamlessDocumentConcreteCloser closeWithContentFrame:block:]_block_invoke_2
___copy_helper_block_92
___destroy_helper_block_93
___64-[QLSeamlessDocumentConcreteCloser closeWithContentFrame:block:]_block_invoke97
___copy_helper_block_98
___destroy_helper_block_99
___64-[QLSeamlessDocumentConcreteCloser closeWithContentFrame:block:]_block_invoke111
___copy_helper_block_118
___destroy_helper_block_119
-[QLSeamlessDocumentConcreteCloser _applicationWillTerminate:]
-[QLSeamlessDocumentConcreteCloser displayState]
-[QLSeamlessDocumentConcreteCloser setDisplayState:]
-[QLSeamlessDocumentConcreteCloser window]
-[QLSeamlessDocumentConcreteCloser setWindow:]
-[QLSeamlessDocumentConcreteCloser launcherPort]
-[QLSeamlessDocumentConcreteCloser setLauncherPort:]
-[QLPreviewPanel(QLAccessibility) accessibilityAttributeValue:]
+[QLMediaUIControl initialize]
-[QLMediaUIControl initWithFrame:]
-[QLMediaUIControl initWithCoder:]
-[QLMediaUIControl encodeWithCoder:]
-[QLMediaUIControl action]
-[QLMediaUIControl setAction:]
-[QLMediaUIControl target]
-[QLMediaUIControl setTarget:]
-[QLMediaUIControl isEnabled]
-[QLMediaUIControl setEnabled:]
-[QLMediaUIControl isHighlighted]
-[QLMediaUIControl setHighlighted:]
-[QLMediaUIControl isTracking]
-[QLMediaUIControl setTracking:]
-[QLMediaUIControl sendAction:to:]
-[QLMediaUIControl acceptsFirstMouse:]
-[QLMediaUIControl acceptsFirstResponder]
-[QLMediaUIControl(NSAccessibility) accessibilityIsIgnored]
-[QLMediaUIControl(NSAccessibility) accessibilityAttributeNames]
-[QLMediaUIControl(NSAccessibility) accessibilityAttributeValue:]
-[QLMediaUIControl(NSAccessibility) accessibilityIsAttributeSettable:]
-[NSWindowController(QLSeamlessOpeningAdditions) seamlessOpeningContentFrame]
__QLDefaultSeamlessOpeningContentFrame
+[QLSeamlessOpeningItemInfo info]
-[QLSeamlessOpeningItemInfo dealloc]
-[QLSeamlessOpeningItemInfo sourceFrame]
-[QLSeamlessOpeningItemInfo setSourceFrame:]
-[QLSeamlessOpeningItemInfo contentRect]
-[QLSeamlessOpeningItemInfo setContentRect:]
-[QLSeamlessOpeningItemInfo sourceImage]
-[QLSeamlessOpeningItemInfo setSourceImage:]
+[QLSeamlessDocumentAnimator _adjustPositionOfWindow:withContentFrame:forPanelFrame:panelContentFrame:]
+[QLSeamlessDocumentAnimator CGImageFromWindow:frame:]
+[QLSeamlessDocumentAnimator snapshotWindowFromWindow:contentFrame:]
+[QLSeamlessDocumentAnimator infoFromMachCallBlock:transitionType:level:]
___73+[QLSeamlessDocumentAnimator infoFromMachCallBlock:transitionType:level:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[QLSeamlessDocumentAnimator validatedContentFrame:ofWindow:]
+[QLSeamlessDocumentAnimator effectForWindow:contentFrame:transitionType:level:itemInfo:completionBlock:]
___105+[QLSeamlessDocumentAnimator effectForWindow:contentFrame:transitionType:level:itemInfo:completionBlock:]_block_invoke
___copy_helper_block_104
___destroy_helper_block_105
-[QLBubbleWindowController updateControls]
-[QLBubbleWindowController _intrinsicMargin]
-[QLBubbleWindowController _additionalContentInset]
-[QLBubbleWindowController bubble]
-[QLBubbleWindowController setBubble:]
-[QLBubbleControlView hitTest:]
-[QLBubbleWindow _presenterOnly]
-[QLBubbleWindow _ownerOnly]
-[QLBubbleWindow _canBecomeSecondaryKeyWindow]
-[QLBubbleWindow standardWindowButton:]
-[QLBubbleWindow fieldEditor:forObject:]
-[QLBubbleWindow endEditingFor:]
-[QLBubbleWindow initWithContentRect:styleMask:backing:defer:]
-[QLBubbleWindow canBecomeKeyWindow]
-[QLBubbleWindow mouseDown:]
-[QLBubbleWindow mouseDragged:]
-[QLBubbleWindow bubble]
-[QLBubbleWindow setBubble:]
-[QLBubbleReserved dealloc]
-[QLBubbleReserved finalize]
-[QLBubble init]
-[QLBubble dealloc]
-[QLBubble isVisible]
-[QLBubble setVisible:]
-[QLBubble _updateBubbleShow:]
-[QLBubble _activateEventMonitor]
-[QLBubble _deactivateEventMonitor]
-[QLBubble setAutomaticallyCloseWithMask:filterMask:block:]
___59-[QLBubble setAutomaticallyCloseWithMask:filterMask:block:]_block_invoke
___59-[QLBubble setAutomaticallyCloseWithMask:filterMask:block:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_173
___destroy_helper_block_174
-[QLBubble invalidateBackground]
-[QLBubble bubbleFrameFromItemFrame:size:forcedEdge:inScreen:arrowEdge:position:]
___81-[QLBubble bubbleFrameFromItemFrame:size:forcedEdge:inScreen:arrowEdge:position:]_block_invoke
___copy_helper_block_192
___destroy_helper_block_193
-[QLBubble _bubbleFrameFromItemFrame:forcedEdge:inScreen:arrowEdge:position:]
-[QLBubble startResizing]
-[QLBubble endResizing]
-[QLBubble hasControls]
-[QLBubble _updateControls]
-[QLBubble controls]
-[QLBubble setControls:]
-[QLBubble setControlsAtBottom:]
-[QLBubble controlsAtBottom]
-[QLBubble performBubbleAction:]
-[QLBubble controlAlignment]
-[QLBubble setControlAlignment:]
-[QLBubble mouseDown:]
-[QLBubble mouseDragged:]
-[QLBubble effect]
-[QLBubble _openCloseWindowEffect]
-[QLBubble createWindowIfNeeded]
-[QLBubble resetTitlebarVisibility]
-[QLBubble _open]
-[QLBubble openingCompletionBlock]
___34-[QLBubble openingCompletionBlock]_block_invoke
___copy_helper_block_478
___destroy_helper_block_479
-[QLBubble _showBubble]
___23-[QLBubble _showBubble]_block_invoke
___copy_helper_block_500
___destroy_helper_block_501
-[QLBubble invokeShowBubbleEffect]
-[QLBubble invertShowBubbleEffect]
-[QLBubble updateWithOptions:]
-[QLBubble update]
-[QLBubble closingCompletionBlock]
___34-[QLBubble closingCompletionBlock]_block_invoke
___copy_helper_block_550
___destroy_helper_block_551
-[QLBubble _dismiss]
-[QLBubble close]
-[QLBubble windowDidUpdate]
-[QLBubble _setDirectlyVisible:]
-[QLBubble _windowDidMove]
-[QLBubble _windowWillClose]
-[QLBubble _windowWillMiniaturize]
-[QLBubble _windowDidDeminiaturize]
-[QLBubble _breakWithParentWindow]
-[QLBubble _linkWithParentWindow]
-[QLBubble parentWindow]
-[QLBubble setParentWindow:]
-[QLBubble window:willPositionSheet:usingRect:]
-[QLBubble setDelegate:]
-[QLBubble delegate]
-[QLBubble contentView]
-[QLBubble setContentView:]
-[QLBubble animationType]
-[QLBubble setAnimationType:]
-[QLBubble preferredEdge]
-[QLBubble setPreferredEdge:]
-[QLBubble forcePreferredEdge]
-[QLBubble setForcePreferredEdge:]
-[QLBubble forceTitleBar]
-[QLBubble setForceTitleBar:]
-[QLBubble usedEdge]
-[QLBubble level]
-[QLBubble setLevel:]
-[QLBubble preventsActivation]
-[QLBubble setPreventsActivation:]
-[QLBubble skipAnimationInvoke]
-[QLBubble setSkipAnimationInvoke:]
-[QLBubble skipAlphaDuringOpenAnimation]
-[QLBubble setSkipAlphaDuringOpenAnimation:]
-[QLBubble aimPoint]
-[QLBubble setAimPoint:]
-[QLBubble sourceFrame]
-[QLBubble sourceFrameOnScreen]
-[QLBubble setSourceFrame:]
-[QLBubble animationSourceFrame]
-[QLBubble setAnimationSourceFrame:]
-[QLBubble animationContentFrame]
-[QLBubble setAnimationContentFrame:]
-[QLBubble arrowEdge]
-[QLBubble setArrowEdge:]
-[QLBubble arrowPosition]
-[QLBubble setArrowPosition:]
-[QLBubble ignoreItemFrameWhenResizing]
-[QLBubble setIgnoreItemFrameWhenResizing:]
-[QLBubble neverResize]
-[QLBubble setNeverResize:]
-[QLBubble mouseDownCanMoveBubble]
-[QLBubble setMouseDownCanMoveBubble:]
-[QLBubble bubbleFrame]
-[QLBubble setBubbleFrame:]
-[QLBubble title]
-[QLBubble setTitle:]
-[QLBubble titleAlignment]
-[QLBubble setTitleAlignment:]
-[QLBubble window]
-[QLBubble windowController]
-[QLBubble animating]
-[QLBubble resizing]
-[QLBubble _shouldDrawBubbleBackground]
-[QLBubble _drawBubbleBackgroundInFrame:]
-[QLBubble hasWindowOwnership]
-[QLBubble _additionalContentInset]
-[QLBubble appearanceName]
-[QLBubble setAppearanceName:]
-[QLBubbleAnimator dealloc]
-[QLBubbleAnimator _startAnimationIfNeeded]
-[QLBubbleAnimator invalidate]
-[QLBubbleAnimator animating]
-[QLBubbleAnimator _currentSizeWithProgress:]
-[QLBubbleAnimator _currentItemFrameWithProgress:]
-[QLBubbleAnimator _startResizing]
-[QLBubbleAnimator setSize:itemFrame:edge:animate:]
-[QLBubbleAnimator _updateBubbleWithResizeProgress:moveProgress:]
-[QLBubbleAnimator _updateBubble]
-[QLBubbleAnimator animationProgress:]
-[QLBubbleAnimator bubble]
-[QLBubbleAnimator setBubble:]
-[QLBubbleAnimator targetSize]
-[QLBubbleAnimator targetItemFrame]
-[QLBubbleAnimator targetEdge]
-[QLFrameDebugView drawRect:]
-[QLFrameDebugWindow initWithContentRect:]
+[QLConfiguration sharedConfiguration]
___38+[QLConfiguration sharedConfiguration]_block_invoke
-[QLConfiguration init]
-[QLConfiguration dealloc]
-[QLConfiguration selectorForURL:forObject:]
-[QLConfiguration fakeSchemeForURL:]
-[QLConfiguration allowWebPluginsForURL:]
-[QLControlButton initWithFrame:]
-[QLControlButton initWithCoder:]
-[QLControlButton dealloc]
-[QLControlButton control]
-[QLControlButton sendAction:to:]
-[QLControlButton _updateStyle]
-[QLControlButton setStyle:]
-[QLControlButton setImage:]
-[QLControlButton originalImage]
-[QLControlButton setEnabled:]
-[QLControlButton setShown:]
-[QLControlButton setTitle:]
-[QLControlButton setMenuProvider:]
-[QLControlButton menuProvider]
-[QLControlButton setControlIdentifier:]
-[QLControlButton controlIdentifier]
-[QLControlButton buttonWidth]
-[QLControlButton setButtonWidth:]
-[QLControlButton drawRect:]
-[QLControlButton mouseEntered:]
-[QLControlButton mouseExited:]
-[QLControlButton mouseDown:]
-[QLControlButton rightMouseDown:]
-[QLControlButton viewWillMoveToWindow:]
-[QLControlButton viewDidMoveToWindow]
-[QLControlButton _updateTooltip]
-[QLControlButton viewDidHide]
-[QLControlButton viewDidUnhide]
-[QLControlButton MediaUI_slice]
-[QLControlButton sizeToFit]
-[QLControlButton observeValueForKeyPath:ofObject:change:context:]
-[QLControlButton alternate]
-[QLControlButton setAlternate:]
-[QLControlButton sendActionOnMouseDown]
-[QLControlButton setSendActionOnMouseDown:]
-[QLControlButton isShown]
-[QLControlButton style]
-[QLControlButton segmentedStyle]
-[QLControlButton setSegmentedStyle:]
-[QLControlButton tooltipMargin]
-[QLControlButton setTooltipMargin:]
-[QLControlButton common]
-[QLControlButton setCommon:]
-[QLPreviewControlSeparator drawRect:]
-[QLPreviewControlSeparator allowsVibrancy]
-[QLControlsContainerView updateConstraints]
-[QLControlsContainerView _updateNormalButtonStyleConstraints]
-[QLControlsContainerView _updateGlassyButtonStyleConstraints]
-[QLControlsContainerView hitTest:]
-[QLControlsContainerView controlsController]
-[QLControlsContainerView setControlsController:]
-[QLControlsCenteringView hitTest:]
-[QLControlsCenteringView updateConstraints]
-[QLControlsCenteringView controlsController]
-[QLControlsCenteringView setControlsController:]
-[QLControlsController init]
-[QLControlsController dealloc]
-[QLControlsController setControlsDict:]
-[QLControlsController controlsDict]
-[QLControlsController setButtonStyle:]
-[QLControlsController setControlsView:]
-[QLControlsController _shownControlElements]
-[QLControlsController _updateControlWithIdentifier:]
___53-[QLControlsController _updateControlWithIdentifier:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLControlsController _controlWithIdentifier:]
-[QLControlsController _controlUIForForIdentifier:]
-[QLControlsController _controlIdentifiersForSegmentedControlWithIdentifier:]
-[QLControlsController _controlBinding:shouldTriggerRelayout:update:]
-[QLControlsController _bindedControl:withBinding:]
-[QLControlsController bind:ofControlWithIdentifier:toObject:withKeyPath:options:]
-[QLControlsController unbind:ofControlWithIdentifier:]
-[QLControlsController observeValueForKeyPath:ofObject:change:context:]
-[QLControlsController _separatorHeight]
-[QLControlsController _updateInternalViews]
-[QLControlsController _setContainerView:]
-[QLControlsController _containerViewDidChangeFrame:]
-[QLControlsController _setupCenteringViewConstraintsInControlsView]
-[QLControlsController _layoutControls]
___39-[QLControlsController _layoutControls]_block_invoke
-[QLControlsController frameOfControlWithIdentifier:]
-[QLControlsController setAlignment:]
-[QLControlsController setNeedsRelayout]
-[QLControlsController _relayoutIfNeeded]
-[QLControlsController controlsView]
-[QLControlsController delegate]
-[QLControlsController setDelegate:]
-[QLControlsController controlSize]
-[QLControlsController setControlSize:]
-[QLControlsController buttonStyle]
-[QLControlsController alignment]
-[QLControlsController collectionKeys]
-[QLControlsController setCollectionKeys:]
-[QLControlsController containerView]
-[QLControlsController effectiveWidth]
-[QLControlsController extraWidth]
-[QLControlsController setExtraWidth:]
-[QLTooltipTextFieldCell _textAttributes]
-[QLTooltipTextFieldCell drawInteriorWithFrame:inView:]
-[QLTooltipView newPathInBounds:]
-[QLTooltipView drawRect:]
-[QLTooltipView position]
-[QLTooltipView setPosition:]
+[QLControlTooltip tooltipWindow]
-[QLControlTooltip initWithContentRect:styleMask:backing:defer:]
-[QLControlTooltip dealloc]
-[QLControlTooltip _updateWindowFrame]
-[QLControlTooltip setString:]
-[QLControlTooltip string]
-[QLControlTooltip setAnchorRect:]
-[QLControlTooltip anchorRect]
-[QLControlTooltip accessibilityIsIgnored]
-[QLControlTooltip parentWindow]
-[QLControlTooltip setParentWindow:]
-[QLControlTooltip verticallyPositioned]
-[QLControlTooltip setVerticallyPositioned:]
+[QLImageWrapper wrapperWithImage:url:]
-[QLImageWrapper dealloc]
-[QLImageWrapper image]
-[QLImageWrapper _startLoadingImage]
___36-[QLImageWrapper _startLoadingImage]_block_invoke
___36-[QLImageWrapper _startLoadingImage]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_13
___destroy_helper_block_14
-[QLImageWrapper discard]
-[QLRemoteConfiguration initWithConfigurationKey:initiallyUseHardcodedConfiguration:]
___85-[QLRemoteConfiguration initWithConfigurationKey:initiallyUseHardcodedConfiguration:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLRemoteConfiguration initWithConfigurationKey:]
-[QLRemoteConfiguration dealloc]
-[QLRemoteConfiguration finalize]
-[QLRemoteConfiguration _postProcessConfiguration]
__qlRemoteConfigurationCrashOnNSException
-[QLRemoteConfiguration _updateConfigurationFromDisk]
-[QLRemoteConfiguration updateConfigurationBlocking:]
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke
___copy_helper_block_37
___destroy_helper_block_38
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke42
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke_2
___copy_helper_block_45
___destroy_helper_block_46
_myConnectionFinalizer
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke51
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke_270
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke_3
___copy_helper_block_94
___destroy_helper_block_95
___copy_helper_block_100
___destroy_helper_block_101
___copy_helper_block_104
___destroy_helper_block_105
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke110
___copy_helper_block_111
___destroy_helper_block_112
-[QLRemoteConfiguration updateConfiguration]
-[QLRemoteConfiguration configurationDictionary]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___48-[QLRemoteConfiguration configurationDictionary]_block_invoke
___copy_helper_block_115
___destroy_helper_block_116
-[QLRemoteConfiguration doSyncWithinConfigurationQueue:]
-[QLRemoteConfiguration validateConfigurationDictionary:]
-[QLRemoteConfiguration didUpdateConfigurationWithDictionary:]
-[QLRemoteConfiguration hardcodedConfiguration]
-[QLRemoteConfiguration configurationKey]
__QLSeamlessOpeningDidCompleteOpeningDocument
__QLSeamlessOpeningGetSourceInformation
-[QLPreviewWindowButton acceptsFirstResponder]
-[QLPreviewWindowButton mouseEntered:]
-[QLPreviewWindowButton mouseExited:]
+[QLPreviewWindowButtonCell buttonImage]
+[QLPreviewWindowButtonCell buttonRolloverImage]
+[QLPreviewWindowButtonCell buttonAlternateImage]
+[QLPreviewWindowButtonCell buttonSelector]
-[QLPreviewWindowButtonCell accessibilityAttributeNames]
-[QLPreviewWindowButtonCell accessibilityEditedAttribute]
-[QLPreviewWindowButtonCell accessibilityIsAttributeSettable:]
-[QLPreviewWindowButtonCell acceptsFirstResponder]
+[QLPreviewWindowCloseButtonCell buttonImage]
___45+[QLPreviewWindowCloseButtonCell buttonImage]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[QLPreviewWindowCloseButtonCell buttonAlternateImage]
___54+[QLPreviewWindowCloseButtonCell buttonAlternateImage]_block_invoke
___copy_helper_block_51
___destroy_helper_block_52
+[QLPreviewWindowCloseButtonCell buttonSelector]
-[QLPreviewWindowCloseButtonCell accessibilitySubroleAttribute]
+[QLPreviewWindowZoomButtonCell buttonImage]
+[QLPreviewWindowZoomButtonCell buttonAlternateImage]
+[QLPreviewWindowZoomButtonCell buttonSelector]
-[QLPreviewWindowZoomButtonCell accessibilitySubroleAttribute]
+[QLPreviewWindowFullscreenButtonCell buttonImage]
___50+[QLPreviewWindowFullscreenButtonCell buttonImage]_block_invoke
___copy_helper_block_70
___destroy_helper_block_71
+[QLPreviewWindowFullscreenButtonCell buttonAlternateImage]
___59+[QLPreviewWindowFullscreenButtonCell buttonAlternateImage]_block_invoke
___copy_helper_block_74
___destroy_helper_block_75
+[QLPreviewWindowFullscreenButtonCell buttonSelector]
-[QLPreviewWindowFullscreenButtonCell accessibilitySubroleAttribute]
-[QLPreviewTitleBarView updateConstraints]
-[QLPreviewTitleBarView _updateTitleFieldConstraints]
-[QLPreviewTitleBarView acceptsFirstMouse:]
-[QLPreviewWindowController _intrinsicMargin]
-[QLPreviewWindowController _additionalContentInset]
-[QLPreviewWindowController _contentInset]
-[QLPreviewWindowController _buttonToWindowPadding]
-[QLPreviewWindowController _buttonToContentPadding]
-[QLPreviewWindowController _titleBarEdgeToWindowEdgePadding]
-[QLPreviewWindowController _topBarTotalHeightIncludingPadding]
-[QLPreviewWindowController initWithWindow:]
-[QLPreviewWindowController dealloc]
-[QLPreviewWindowController backgroundView]
-[QLPreviewWindowController _titleFieldFrameChanged:]
-[QLPreviewWindowController _setupTitleField]
-[QLPreviewWindowController setTitle:]
-[QLPreviewWindowController title]
-[QLPreviewWindowController _titleField]
-[QLPreviewWindowController titleAlignment]
-[QLPreviewWindowController setTitleAlignment:]
-[QLPreviewWindowController hasControls]
-[QLPreviewWindowController updateControls]
-[QLPreviewWindowController setControlsAtBottom:]
-[QLPreviewWindowController controlsAtBottom]
-[QLPreviewWindowController hasLeftControls]
-[QLPreviewWindowController hasRightControls]
-[QLPreviewWindowController hasTightControls]
-[QLPreviewWindowController leftControlsController]
-[QLPreviewWindowController _rightControlsViewFrameChanged:]
-[QLPreviewWindowController rightControlsController]
-[QLPreviewWindowController standardWindowButton:]
-[QLPreviewWindowController _updateWindowButtons]
___49-[QLPreviewWindowController _updateWindowButtons]_block_invoke
___copy_helper_block_311
___destroy_helper_block_312
-[QLPreviewWindowController visibleButtonTypes]
-[QLPreviewWindowController setVisibleButtonTypes:]
-[QLPreviewWindowController _updatePacking]
-[QLPreviewWindowController _updateInternalFrames]
-[QLPreviewWindowController _updateContentViewConstraintsInRootView]
-[QLPreviewWindowController _updateTitleBarConstraintsInRootView]
-[QLPreviewWindowController contentView]
-[QLPreviewWindowController _shouldShowTitleBar]
-[QLPreviewWindowController _shouldMakeRoomForTitleBar]
-[QLPreviewWindowController contentFrameForWindowSize:]
-[QLPreviewWindowController windowSizeFromContentSize:]
-[QLPreviewWindowController visualMargins]
-[QLPreviewWindowController titleBarVisibility]
-[QLPreviewWindowController setTitleBarVisibility:]
-[QLPreviewHighlightItemLayer init]
-[QLPreviewHighlightItemLayer setKeyAppearance:]
-[QLPreviewHighlightItemLayer keyAppearance]
-[QLPreviewHighlightItemLayer highlightLayer:]
_QLPreviewSetItemLayerBorder
+[QLOverlayBorderView overlayBorderColor]
___41+[QLOverlayBorderView overlayBorderColor]_block_invoke
-[QLOverlayBorderView initWithFrame:]
-[QLOverlayBorderView _CAViewFlags]
-[QLOverlayBorderView viewWillMoveToWindow:]
___44-[QLOverlayBorderView viewWillMoveToWindow:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLOverlayBorderView hitTest:]
+[QLScrollerLayer initialize]
+[QLScrollerLayer _aquaScrollerBehaviorChanged:]
-[QLScrollerLayer initWithStyle:size:]
+[QLScrollerLayer scrollerLayerWithStyle:size:]
-[QLScrollerLayer dealloc]
-[QLScrollerLayer layoutSublayers]
-[QLScrollerLayer drawLayer:inContext:]
-[QLScrollerLayer actionForLayer:forKey:]
-[QLScrollerLayer setDoubleValue:]
-[QLScrollerLayer doubleValue]
-[QLScrollerLayer setKnobProportion:]
-[QLScrollerLayer knobProportion]
+[QLScrollerLayer keyPathsForValuesAffectingCanScroll]
-[QLScrollerLayer canScroll]
-[QLScrollerLayer _updateScroll:]
-[QLScrollerLayer trackKnobWithEvent:]
-[QLScrollerLayer convertRectToBacking:]
-[QLScrollerLayer convertRectFromBacking:]
-[QLScrollerLayer layer]
-[QLScrollerLayer scrollerImp:animateKnobAlphaTo:duration:]
-[QLScrollerLayer scrollerImp:animateTrackAlphaTo:duration:]
-[QLScrollerLayer scrollerImp:overlayScrollerStateChangedTo:]
-[QLScrollerLayer imp]
-[QLScrollerLayer delegate]
-[QLScrollerLayer setDelegate:]
-[QLScrollerLayer hideTrack]
-[QLScrollerLayer setHideTrack:]
+[QLScrollController scrollControllerForView:hostingLayer:]
-[QLScrollController dealloc]
-[QLScrollController _hasVerticalScrolling]
-[QLScrollController _hasHorizontalScrolling]
-[QLScrollController _setupScrollers]
-[QLScrollController _teardownScrollers]
___40-[QLScrollController _teardownScrollers]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLScrollController _updateScrollerVisibility]
___47-[QLScrollController _updateScrollerVisibility]_block_invoke
___copy_helper_block_79
___destroy_helper_block_80
-[QLScrollController activate]
-[QLScrollController deactivate]
-[QLScrollController isActive]
-[QLScrollController verticalScroller]
-[QLScrollController horizontalScroller]
-[QLScrollController scrollerAtPoint:]
-[QLScrollController viewDidResize:]
-[QLScrollController observeValueForKeyPath:ofObject:change:context:]
-[QLScrollController mouseEntered:]
-[QLScrollController mouseExited:]
-[QLScrollController mouseMoved:]
-[QLScrollController scroller:localPointFromEvent:]
-[QLScrollController scrollerDidScroll:]
-[QLScrollController scrollerDidEndTracking:]
-[QLScrollController pageScrollPercentageForScroller:]
-[QLScrollController contentAreaRectForScrollerImpPair:]
-[QLScrollController inLiveResizeForScrollerImpPair:]
-[QLScrollController mouseLocationInContentAreaForScrollerImpPair:]
-[QLScrollController scrollerImpPair:convertContentPoint:toScrollerImp:]
-[QLScrollController scrollerImpPair:setContentAreaNeedsDisplayInRect:]
-[QLScrollController scrollerImpPair:updateScrollerStyleForNewRecommendedScrollerStyle:]
-[QLScrollController view]
-[QLScrollController setView:]
-[QLScrollController hostingLayer]
-[QLScrollController setHostingLayer:]
-[QLScrollController delegate]
-[QLScrollController setDelegate:]
-[QLScrollController controlSize]
-[QLScrollController setControlSize:]
-[QLPreviewSwipeController dealloc]
-[QLPreviewSwipeController _swipeEndedAndCompleted:]
-[QLPreviewSwipeController swipeWithEvent:containingView:options:beginBlock:previewFrameBlock:progressBlock:completionBlock:]
___125-[QLPreviewSwipeController swipeWithEvent:containingView:options:beginBlock:previewFrameBlock:progressBlock:completionBlock:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QLPreviewSwipeController abortSwipe]
-[QLPreviewSwipeController previewView]
-[QLPreviewSwipeController setPreviewView:]
-[QLPreviewSwipeController forwardSwipe]
-[QLPreviewSwipeController status]
-[QLPreviewSwipeController setStatus:]
-[QLPreviewCacheManager init]
-[QLPreviewCacheManager dealloc]
-[QLPreviewCacheManager setMaxRecents:]
-[QLPreviewCacheManager _documentForItem:url:remove:]
-[QLPreviewCacheManager hasCachedDocumentForItem:]
-[QLPreviewCacheManager cachedDocumentForItem:]
-[QLPreviewCacheManager cachedDocumentForURL:]
-[QLPreviewCacheManager cacheRecentDocument:]
-[QLPreviewCacheManager setPreloadedItems:]
-[QLPreviewCacheManager preloadedItems]
-[QLPreviewCacheManager preloadItemsNow]
-[QLPreviewCacheManager _invalidateRecentDocuments]
-[QLPreviewCacheManager _invalidatePreloadedDocuments]
-[QLPreviewCacheManager flushCache]
-[QLPreviewCacheManager invalidate]
-[QLPreviewCacheManager previewView]
-[QLPreviewCacheManager setPreviewView:]
-[QLPreviewCacheManager maxRecents]
-[QLPreviewPasswordBackgroundView drawRect:]
-[QLPreviewPasswordBackgroundView drawsBackground]
-[QLPreviewPasswordBackgroundView setDrawsBackground:]
-[QLPreviewPasswordViewController initWithNibName:bundle:]
-[QLPreviewPasswordViewController loadView]
-[QLPreviewPasswordViewController quickLookView]
-[QLPreviewPasswordViewController quickLookLayer]
-[QLPreviewPasswordViewController quickLookFrame]
-[QLPreviewPasswordViewController setQuickLookFrame:]
-[QLPreviewPasswordViewController setMode:]
-[QLPreviewPasswordViewController inputFocusType]
-[QLPreviewPasswordViewController giveInputFocus]
-[QLPreviewPasswordViewController sizingConstraints]
-[QLPreviewPasswordViewController setHasEnteredWrongPassword:]
-[QLPreviewPasswordViewController didShow]
-[QLPreviewPasswordViewController hasEnteredWrongPassword]
-[QLPreviewPasswordViewController validatePassword:]
-[QLPreviewPasswordViewController document]
-[QLPreviewPasswordViewController setDocument:]
-[QLMediaUIValueTiming hash]
-[QLMediaUIValueTiming isEqual:]
-[QLMediaUIValueTiming copyWithZone:]
-[QLMediaUIValueTiming initWithCoder:]
-[QLMediaUIValueTiming encodeWithCoder:]
+[QLMediaUIValueTiming allocWithZone:]
-[QLMediaUIValueTiming classForCoder]
-[QLMediaUIValueTiming _timing]
-[QLMediaUIValueTiming anchorValue]
-[QLMediaUIValueTiming anchorTimeStamp]
-[QLMediaUIValueTiming rate]
+[QLMediaUIValueTiming(QLMediaUIValueTimingCreation) valueTimingWithAnchorValue:anchorTimeStamp:rate:]
-[QLMediaUIValueTiming(QLMediaUIValueTimingCreation) initWithAnchorValue:anchorTimeStamp:rate:]
-[QLMediaUIValueTiming(QLMediaUIValueTimingCreation) initWithValueTiming:]
+[QLMediaUIValueTiming(QLMediaUIExtendedValueTiming) currentTimeStamp]
-[QLMediaUIValueTiming(QLMediaUIExtendedValueTiming) currentValue]
-[QLMediaUIValueTiming(QLMediaUIExtendedValueTiming) valueForTimeStamp:]
-[QLMediaUIValueTiming(QLMediaUIExtendedValueTiming) timeStampForValue:]
-[QLMediaUIValueTiming(QLMediaUIExtendedValueTiming) isEqualToValueTiming:]
-[QLMediaUIConcreteValueTiming initWithAnchorValue:anchorTimeStamp:rate:]
-[QLMediaUIConcreteValueTiming copyWithZone:]
-[QLMediaUIConcreteValueTiming anchorValue]
-[QLMediaUIConcreteValueTiming anchorTimeStamp]
-[QLMediaUIConcreteValueTiming rate]
-[QLMediaUIConcreteValueTiming _timing]
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table13
GCC_except_table94
GCC_except_table186
GCC_except_table351
GCC_except_table41
GCC_except_table42
GCC_except_table43
GCC_except_table56
GCC_except_table58
GCC_except_table59
GCC_except_table60
GCC_except_table61
GCC_except_table62
GCC_except_table63
GCC_except_table65
GCC_except_table66
GCC_except_table100
GCC_except_table115
GCC_except_table116
GCC_except_table122
GCC_except_table123
GCC_except_table137
GCC_except_table140
GCC_except_table158
GCC_except_table159
GCC_except_table211
GCC_except_table36
GCC_except_table31
GCC_except_table46
GCC_except_table11
GCC_except_table27
GCC_except_table28
GCC_except_table50
GCC_except_table51
GCC_except_table1
GCC_except_table25
GCC_except_table26
GCC_except_table56
GCC_except_table57
GCC_except_table98
GCC_except_table122
GCC_except_table0
GCC_except_table3
GCC_except_table12
GCC_except_table0
GCC_except_table12
GCC_except_table13
GCC_except_table35
GCC_except_table0
GCC_except_table7
GCC_except_table9
GCC_except_table32
-[QLIndexSheetThumbnailLayer discardThumbnail].grayComponents
_thumbnailPlaceholderSize
_deltaY
_deltaX
_angles
-[QLFocusBackgroundLayer drawInContext:].components
-[QLFocusBackgroundLayer drawInContext:].locations
_thumbnailPlaceholderSize
-[QLThumbnailLayer discard].grayComponents
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp199
___block_literal_global200
___block_descriptor_tmp221
___block_literal_global222
___block_descriptor_tmp229
___block_descriptor_tmp233
___block_descriptor_tmp238
___block_descriptor_tmp242
___QLPanelLogDomain
_QLPreviewPanelWillCloseNotification
_QLPreviewPanelWillFlipNotification
___block_descriptor_tmp
___block_descriptor_tmp226
___block_descriptor_tmp276
___QLControllerLogDomain
___QLEventsLogDomain
___block_descriptor_tmp
___block_descriptor_tmp750
___block_descriptor_tmp755
___block_descriptor_tmp768
___block_descriptor_tmp773
___block_descriptor_tmp1097
___block_descriptor_tmp1134
___block_descriptor_tmp1140
___block_descriptor_tmp1150
___block_descriptor_tmp1156
___block_descriptor_tmp1202
___block_descriptor_tmp
___block_descriptor_tmp290
___block_descriptor_tmp329
___block_descriptor_tmp336
___block_descriptor_tmp502
___block_descriptor_tmp535
___block_descriptor_tmp575
___block_descriptor_tmp
___block_descriptor_tmp106
___block_descriptor_tmp318
___block_descriptor_tmp361
___block_descriptor_tmp393
___block_descriptor_tmp515
___block_descriptor_tmp542
___QLPreviewLoadingLogDomain
___QLViewEventsLogDomain
___block_descriptor_tmp
___block_descriptor_tmp1264
___QLInlinePreviewLogDomain
___block_descriptor_tmp
___block_descriptor_tmp337
___block_descriptor_tmp
___block_descriptor_tmp575
___block_descriptor_tmp
___QLWatcherLogDomain
___block_descriptor_tmp
___block_descriptor_tmp50
___block_descriptor_tmp92
___block_descriptor_tmp97
___block_descriptor_tmp112
___block_descriptor_tmp135
___block_descriptor_tmp
___block_literal_global
___QLProtoLogDomain
___block_descriptor_tmp
___block_descriptor_tmp57
___block_descriptor_tmp78
___block_descriptor_tmp98
___block_descriptor_tmp106
___block_descriptor_tmp142
___block_descriptor_tmp154
___block_descriptor_tmp162
___block_literal_global
___block_descriptor_tmp221
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp54
___block_descriptor_tmp60
___block_descriptor_tmp70
___block_descriptor_tmp76
___block_descriptor_tmp91
___block_descriptor_tmp106
___block_descriptor_tmp151
___block_descriptor_tmp156
___block_descriptor_tmp169
___block_descriptor_tmp174
___block_descriptor_tmp182
___block_descriptor_tmp186
___block_descriptor_tmp192
___block_descriptor_tmp249
___block_descriptor_tmp255
___block_descriptor_tmp260
___block_descriptor_tmp265
___block_descriptor_tmp269
___block_descriptor_tmp281
___block_descriptor_tmp285
___block_descriptor_tmp289
___block_descriptor_tmp293
___block_descriptor_tmp311
___block_descriptor_tmp327
___block_descriptor_tmp331
___block_descriptor_tmp339
___block_descriptor_tmp343
___block_descriptor_tmp349
___block_descriptor_tmp354
___block_descriptor_tmp358
___block_descriptor_tmp364
___block_descriptor_tmp371
___block_descriptor_tmp426
___block_descriptor_tmp430
___block_descriptor_tmp441
___block_descriptor_tmp447
___block_descriptor_tmp593
___block_descriptor_tmp597
___block_descriptor_tmp624
___block_descriptor_tmp628
___block_descriptor_tmp635
___block_descriptor_tmp637
___block_descriptor_tmp642
___block_descriptor_tmp646
___block_descriptor_tmp651
___block_descriptor_tmp653
___block_descriptor_tmp657
___block_descriptor_tmp661
___block_descriptor_tmp665
___block_descriptor_tmp669
___QLRemotePreviewsLogDomain
___block_descriptor_tmp
___block_descriptor_tmp95
___block_descriptor_tmp106
___block_descriptor_tmp228
___block_descriptor_tmp233
___block_descriptor_tmp240
___block_descriptor_tmp247
___block_descriptor_tmp251
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp110
___block_descriptor_tmp116
___block_descriptor_tmp210
___block_descriptor_tmp224
___block_descriptor_tmp232
___block_descriptor_tmp240
___block_descriptor_tmp247
___block_descriptor_tmp253
___block_descriptor_tmp257
___block_descriptor_tmp335
+[NSMutableArray(WeakReferences) ql_mutableArrayUsingWeakReferencesWithCapacity:].callbacks
___block_descriptor_tmp
___block_descriptor_tmp209
___block_descriptor_tmp235
___block_descriptor_tmp250
___block_descriptor_tmp262
___block_descriptor_tmp274
___block_descriptor_tmp282
___block_descriptor_tmp322
___block_descriptor_tmp
___block_descriptor_tmp91
___block_descriptor_tmp104
___block_descriptor_tmp109
___block_descriptor_tmp117
___block_descriptor_tmp124
___block_literal_global
___block_descriptor_tmp129
___block_descriptor_tmp135
___block_descriptor_tmp140
___block_descriptor_tmp172
___block_descriptor_tmp177
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp365
___block_descriptor_tmp418
___block_descriptor_tmp
___block_descriptor_tmp8
___block_descriptor_tmp13
___block_descriptor_tmp18
___block_descriptor_tmp24
___block_descriptor_tmp59
___block_descriptor_tmp61
___block_literal_global
___block_descriptor_tmp129
___block_descriptor_tmp133
___block_descriptor_tmp227
___block_descriptor_tmp237
___block_descriptor_tmp241
___block_descriptor_tmp245
___block_descriptor_tmp263
___block_descriptor_tmp274
___block_descriptor_tmp298
___block_descriptor_tmp306
___block_descriptor_tmp312
___block_descriptor_tmp330
___block_descriptor_tmp349
___block_descriptor_tmp368
___block_descriptor_tmp373
___block_descriptor_tmp411
___block_descriptor_tmp424
___block_descriptor_tmp433
___block_descriptor_tmp439
___block_descriptor_tmp443
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp38
___block_descriptor_tmp60
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp48
___block_descriptor_tmp
___block_descriptor_tmp185
___block_descriptor_tmp
___block_descriptor_tmp105
___block_descriptor_tmp
___block_descriptor_tmp225
___block_descriptor_tmp
___block_descriptor_tmp85
___block_descriptor_tmp96
___block_descriptor_tmp102
___block_descriptor_tmp121
___QLBubbleLogDomain
___block_descriptor_tmp
___block_descriptor_tmp107
___block_descriptor_tmp
___block_descriptor_tmp177
___block_descriptor_tmp196
___block_descriptor_tmp481
___block_descriptor_tmp503
___block_descriptor_tmp553
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp484
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp16
___block_descriptor_tmp
___block_descriptor_tmp41
___block_descriptor_tmp48
___block_descriptor_tmp62
___block_literal_global
___block_descriptor_tmp97
___block_descriptor_tmp103
___block_descriptor_tmp107
___block_descriptor_tmp114
___block_descriptor_tmp118
___QLConfigurationLogDomain
___block_descriptor_tmp
___block_descriptor_tmp54
___block_descriptor_tmp73
___block_descriptor_tmp77
___block_descriptor_tmp315
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp35
___block_descriptor_tmp
___block_descriptor_tmp82
___block_descriptor_tmp
___QLCacheLogDomain
_OBJC_IVAR_$_QLPreviewPanelReserved.linkedWindow
_OBJC_IVAR_$_QLPreviewPanelReserved.currentController
_OBJC_IVAR_$_QLPreviewPanelReserved.ignoreOpenAndClose
_OBJC_IVAR_$_QLPreviewPanelReserved.currentEffect
_OBJC_IVAR_$_QLPreviewPanelReserved.openingEffect
_OBJC_IVAR_$_QLPreviewPanelReserved.defaultEffect
_OBJC_IVAR_$_QLPreviewPanelReserved.ignorePanelFrameChanges
_OBJC_IVAR_$_QLPreviewPanelReserved.openingTime
_OBJC_IVAR_$_QLPreviewPanelReserved.dataSource
_OBJC_IVAR_$_QLPreviewPanelReserved.makeKeyWindow
_OBJC_IVAR_$_QLPreviewPanelReserved.backgroundFocusWindow
_OBJC_IVAR_$_QLPreviewPanelReserved.focusMode
_OBJC_IVAR_$_QLPreviewPanelReserved.backgroundFocusEffect
_OBJC_IVAR_$_QLPreviewPanelReserved.lastShapedBounds
_OBJC_IVAR_$_QLPreviewPanelReserved.panelHasBeenSetup
_OBJC_IVAR_$_QLPreviewPanelReserved.deferredClosing
_OBJC_IVAR_$_QLPreviewPanelReserved.deferredClosingEffect
_OBJC_IVAR_$_QLPreviewPanelReserved.transient
_OBJC_IVAR_$_QLPreviewPanelReserved.positionNearPreviewItem
_OBJC_IVAR_$_QLPreviewPanelReserved._mouseDownEventTapPort
_OBJC_IVAR_$_QLPreviewPanelReserved._mouseDownEventTapSource
_OBJC_IVAR_$_QLPreviewPanelReserved._mouseDownCallback
_OBJC_IVAR_$_QLPreviewPanel._reserved
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.previewItems
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.showsAddToiPhotoButton
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.showsFullscreenButton
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.showsIndexSheetButton
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.selectedItemIndex
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.currentPanel
_OBJC_IVAR_$_QLPreviewPanelManagerReserved.delegate
_OBJC_IVAR_$_QLPreviewPanelManager._reserved
_OBJC_IVAR_$__QLKVOWaiter._object
_OBJC_IVAR_$__QLKVOWaiter._key
_OBJC_IVAR_$__QLKVOWaiter._value
_OBJC_IVAR_$__QLKVOWaiter._continue
_OBJC_IVAR_$_QLPanelPreviewView._previewPanelController
_OBJC_IVAR_$_QLPreviewPanelController._internalView
_OBJC_IVAR_$_QLPreviewPanelController._previewContentView
_OBJC_IVAR_$_QLPreviewPanelController._previewContainerView
_OBJC_IVAR_$_QLPreviewPanelController._setuped
_OBJC_IVAR_$_QLPreviewPanelController._shouldSetup
_OBJC_IVAR_$_QLPreviewPanelController._documentsAddedToIPhoto
_OBJC_IVAR_$_QLPreviewPanelController._documentsToAddToIPhoto
_OBJC_IVAR_$_QLPreviewPanelController._automaticallyManageVisibility
_OBJC_IVAR_$_QLPreviewPanelController._showControls
_OBJC_IVAR_$_QLPreviewPanelController._status
_OBJC_IVAR_$_QLPreviewPanelController._defaultPreviewSize
_OBJC_IVAR_$_QLPreviewPanelController._previewView
_OBJC_IVAR_$_QLPreviewPanelController._iPhotoLibraryPath
_OBJC_IVAR_$_QLPreviewPanelController._fullscreenController
_OBJC_IVAR_$_QLPreviewPanelController._timeoutDate
_OBJC_IVAR_$_QLPreviewPanelController._sharedPreviewView
_OBJC_IVAR_$_QLPreviewPanelController._indexSheetController
_OBJC_IVAR_$_QLPreviewPanelController._delegate
_OBJC_IVAR_$_QLPreviewPanelController._anchorScreens
_OBJC_IVAR_$_QLPreviewPanelController._anchorCorner
_OBJC_IVAR_$_QLPreviewPanelController._anchorPoint
_OBJC_IVAR_$_QLPreviewPanelController._anchorResetTimer
_OBJC_IVAR_$_QLPreviewPanelController._cumulativeMagnification
_OBJC_IVAR_$_QLPreviewPanelController._anchorPointForPositionNearPreviewItem
_OBJC_IVAR_$_QLPreviewPanelController._isOpen
_OBJC_IVAR_$_QLPreviewPanelController._anchorCornerForPositionNearPreviewItem
_OBJC_IVAR_$_QLPreviewPanelController._currentPreviewItemIndex
_OBJC_IVAR_$_QLPreviewPanelController._hasCustomSize
_OBJC_IVAR_$_QLPreviewPanelController._needsToDoReloadData
_OBJC_IVAR_$_QLPreviewPanelController._hasReloadedData
_OBJC_IVAR_$_QLPreviewPanelController._preservesDisplayStateOnNextReloadData
_OBJC_IVAR_$_QLPreviewPanelController._needsToRefreshContentAfterOpeningTransition
_OBJC_IVAR_$_QLPreviewPanelController._isOpening
_OBJC_IVAR_$_QLPreviewPanelController._swipeController
_OBJC_IVAR_$_QLPreviewPanelController._shouldAdjustPanelFrameWhenExitingFullscreen
_OBJC_IVAR_$_QLPreviewPanelController._displayState
_OBJC_IVAR_$_QLPreviewPanelController._flushing
_OBJC_IVAR_$_QLPreviewPanelController._ignoreCloseNotification
_OBJC_IVAR_$_QLPreviewPanelController._alternateMode
_OBJC_IVAR_$_QLPreviewPanelController._openTimestamp
_OBJC_IVAR_$_QLPreviewPanelController._visibleTimestamp
_OBJC_IVAR_$_QLPreviewPanelController._sharingInProgress
_OBJC_IVAR_$_QLPreviewPanelController._fakePlaying
_OBJC_IVAR_$_QLPreviewPanelController._timeSlider
_OBJC_IVAR_$_QLPreviewPanelController._pageNavigationView
_OBJC_IVAR_$_QLPreviewPanelController._slideshow
_OBJC_IVAR_$_QLPreviewPanelController._shouldCloseFullscreen
_OBJC_IVAR_$_QLPreviewPanelController._features
_OBJC_IVAR_$_QLPreviewPanelController._startAtActivation
_OBJC_IVAR_$_QLPreviewPanelController._swipeContainerWindow
_OBJC_IVAR_$_QLPreviewPanelController._transmogrifySource
_OBJC_IVAR_$_QLPreviewPanelController._transmogriphyPort
_OBJC_IVAR_$_QLPreviewPanelController._eventMonitor
_OBJC_IVAR_$_QLPreviewPanelController._hasMultipleItems
_OBJC_IVAR_$_QLPreviewPanelController._openingApplicationInfo
_OBJC_IVAR_$_QLPreviewPanelController._contentViewFrame
_OBJC_IVAR_$_QLPreviewPanelController._scroller
_OBJC_IVAR_$_QLPreviewPanelController._totalButtonWidth
_OBJC_IVAR_$_QLPreviewPanelController._minWindowSize
_OBJC_IVAR_$_QLPreviewSlideshow._previewView
_OBJC_IVAR_$_QLPreviewSlideshow._status
_OBJC_IVAR_$_QLPreviewSlideshow._slideshowTimer
_OBJC_IVAR_$_QLPreviewSlideshow._delegate
_OBJC_IVAR_$_QLPreviewSlideshow._staticDuration
_OBJC_IVAR_$_QLFullscreenControlsPanel._fullscreenController
_OBJC_IVAR_$_QLFullscreenPageControlWindow._fullscreenController
_OBJC_IVAR_$_QLFullscreenWindow._fullscreenController
_OBJC_IVAR_$_QLFullscreenController._status
_OBJC_IVAR_$_QLFullscreenController._fitToScreen
_OBJC_IVAR_$_QLFullscreenController._displaySleepAssertionID
_OBJC_IVAR_$_QLFullscreenController._panelController
_OBJC_IVAR_$_QLFullscreenController._controlsController
_OBJC_IVAR_$_QLFullscreenController._fullscreenWindow
_OBJC_IVAR_$_QLFullscreenController._controlsPanel
_OBJC_IVAR_$_QLFullscreenController._controlsView
_OBJC_IVAR_$_QLFullscreenController._timeSlider
_OBJC_IVAR_$_QLFullscreenController._mouseEnterTrackingArea
_OBJC_IVAR_$_QLFullscreenController._fullscreenView
_OBJC_IVAR_$_QLFullscreenController._backgroundFullscreenWindow
_OBJC_IVAR_$_QLFullscreenController._withPanel
_OBJC_IVAR_$_QLFullscreenController._startSlideshow
_OBJC_IVAR_$_QLFullscreenController._showControls
_OBJC_IVAR_$_QLFullscreenController._originalPresentationOptions
_OBJC_IVAR_$_QLFullscreenController._displaySleepDisabled
_OBJC_IVAR_$_QLFullscreenController._fadeTimer
_OBJC_IVAR_$_QLFullscreenController._fadeEffect
_OBJC_IVAR_$_QLFullscreenController._listeningToMouseMovements
_OBJC_IVAR_$_QLFullscreenController._pageNavigationWindow
_OBJC_IVAR_$_QLFullscreenController._pageNavigationView
_OBJC_IVAR_$_QLFullscreenController._sizeEffect
_OBJC_IVAR_$_QLFullscreenController._controlsCenterPosition
_OBJC_IVAR_$_QLFullscreenController._controlsOrigin
_OBJC_IVAR_$_QLFullscreenController._scroller
_OBJC_IVAR_$_QLGradientLayer._middleGradientColor
_OBJC_IVAR_$_QLGradientLayer._borderGradientColor
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._item
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._cellFrame
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._hasThumbnail
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._thumbnailSize
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._thumbnailMaxSize
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._thumbnail
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._isIcon
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._thumbnailImage
_OBJC_IVAR_$_QLIndexSheetThumbnailLayer._titleLayer
_OBJC_IVAR_$_QLIndexSheetView._previewItems
_OBJC_IVAR_$_QLIndexSheetView._thumbnailLayers
_OBJC_IVAR_$_QLIndexSheetView._visibleThumbnailLayers
_OBJC_IVAR_$_QLIndexSheetView._cachedThumbnailLayers
_OBJC_IVAR_$_QLIndexSheetView._topRow
_OBJC_IVAR_$_QLIndexSheetView._status
_OBJC_IVAR_$_QLIndexSheetView._maxColumns
_OBJC_IVAR_$_QLIndexSheetView._maxRows
_OBJC_IVAR_$_QLIndexSheetView._rootLayer
_OBJC_IVAR_$_QLIndexSheetView._scrollController
_OBJC_IVAR_$_QLIndexSheetView._placeholderImageRef
_OBJC_IVAR_$_QLIndexSheetView._maskedLayer
_OBJC_IVAR_$_QLIndexSheetView._scrollLayer
_OBJC_IVAR_$_QLIndexSheetView._maskLayer
_OBJC_IVAR_$_QLIndexSheetView._itemIndex
_OBJC_IVAR_$_QLIndexSheetView._delegate
_OBJC_IVAR_$_QLIndexSheetView._columns
_OBJC_IVAR_$_QLIndexSheetView._rows
_OBJC_IVAR_$_QLIndexSheetView._margin
_OBJC_IVAR_$_QLIndexSheetView._hasDarkBackground
_OBJC_IVAR_$_QLIndexSheetView._overlayLayer
_OBJC_IVAR_$_QLIndexSheetView._transitioning
_OBJC_IVAR_$_QLSwipeAnimation._window
_OBJC_IVAR_$_QLSwipeAnimation._wid
_OBJC_IVAR_$_QLSwipeAnimation._cid
_OBJC_IVAR_$_QLSwipeAnimation._initialFrame
_OBJC_IVAR_$_QLSwipeAnimation._targetFrame
_OBJC_IVAR_$_QLSwipeAnimation._clipFrame
_OBJC_IVAR_$_QLPreviewViewReserved.mode
_OBJC_IVAR_$_QLPreviewViewReserved.showControls
_OBJC_IVAR_$_QLPreviewViewReserved.sizesPreviewToFit
_OBJC_IVAR_$_QLPreviewViewReserved.viewConstraints
_OBJC_IVAR_$_QLPreviewViewReserved.internalState
_OBJC_IVAR_$_QLPreviewViewReserved.isDeactivating
_OBJC_IVAR_$_QLPreviewViewReserved.supportedDisplayBundleIDs
_OBJC_IVAR_$_QLPreviewViewReserved.cacheManager
_OBJC_IVAR_$_QLPreviewViewReserved.previewItem
_OBJC_IVAR_$_QLPreviewViewReserved.allowLoadingOfUnsupportedDisplayBundleIDs
_OBJC_IVAR_$_QLPreviewViewReserved.transition
_OBJC_IVAR_$_QLPreviewViewReserved.enableDragNDrop
_OBJC_IVAR_$_QLPreviewViewReserved.handlingEvent
_OBJC_IVAR_$_QLPreviewViewReserved.handledMouseDown
_OBJC_IVAR_$_QLPreviewViewReserved.manageVisibilityOnOldDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.manageVisibilityOnNewDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.changingDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.doubleClickModifierFlags
_OBJC_IVAR_$_QLPreviewViewReserved.appURLForNextOpening
_OBJC_IVAR_$_QLPreviewViewReserved.loadingDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.emptyDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.genericDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.hasCustomLoadingDisplayable
_OBJC_IVAR_$_QLPreviewViewReserved.overlayContentView
_OBJC_IVAR_$_QLPreviewViewReserved.delegate
_OBJC_IVAR_$_QLPreviewViewReserved.overlayController
_OBJC_IVAR_$_QLPreviewViewReserved.scrollController
_OBJC_IVAR_$_QLPreviewViewReserved.previewContainerView
_OBJC_IVAR_$_QLPreviewViewReserved.timeControlView
_OBJC_IVAR_$_QLPreviewViewReserved.pathOverlayController
_OBJC_IVAR_$_QLPreviewViewReserved.pageNumOverlayController
_OBJC_IVAR_$_QLPreviewViewReserved.displayable
_OBJC_IVAR_$_QLPreviewViewReserved.document
_OBJC_IVAR_$_QLPreviewViewReserved.displayedDocument
_OBJC_IVAR_$_QLPreviewViewReserved.visualMargins
_OBJC_IVAR_$_QLPreviewViewReserved.userDefinedSizes
_OBJC_IVAR_$_QLPreviewViewReserved.timeoutDate
_OBJC_IVAR_$_QLPreviewViewReserved.blocking
_OBJC_IVAR_$_QLPreviewViewReserved.automaticallyMakePreviewFirstResponder
_OBJC_IVAR_$_QLPreviewViewReserved.shouldCloseWithWindow
_OBJC_IVAR_$_QLPreviewViewReserved.autostarts
_OBJC_IVAR_$_QLPreviewViewReserved.showRemainingTime
_OBJC_IVAR_$_QLPreviewViewReserved.enableRemotePreviews
_OBJC_IVAR_$_QLPreviewViewReserved.fullLayers
_OBJC_IVAR_$_QLPreviewViewReserved.hideLoadingSpinner
_OBJC_IVAR_$_QLPreviewViewReserved.forceVisible
_OBJC_IVAR_$_QLPreviewViewReserved.allowsAlerts
_OBJC_IVAR_$_QLPreviewViewReserved.highlightObject
_OBJC_IVAR_$_QLPreviewViewReserved.mandatoryServer
_OBJC_IVAR_$_QLPreviewViewReserved.forcedContentTypeUTI
_OBJC_IVAR_$_QLPreviewContainerView._previewView
_OBJC_IVAR_$_QLPreviewContainerView._updatePreviewSize
_OBJC_IVAR_$_QLPreviewView._reserved
_OBJC_IVAR_$_QLInlinePreviewController._mode
_OBJC_IVAR_$_QLInlinePreviewController._crossfade
_OBJC_IVAR_$_QLInlinePreviewController._overlayController
_OBJC_IVAR_$_QLInlinePreviewController._backingScaleFactor
_OBJC_IVAR_$_QLInlinePreviewController._previewView
_OBJC_IVAR_$_QLInlinePreviewController._hostingView
_OBJC_IVAR_$_QLInlinePreviewController._hostingLayer
_OBJC_IVAR_$_QLInlinePreviewController._inlinePreviewItem
_OBJC_IVAR_$_QLInlinePreviewController._iconFlavor
_OBJC_IVAR_$_QLInlinePreviewController._delegate
_OBJC_IVAR_$_QLInlinePreviewController._lazyLoading
_OBJC_IVAR_$_QLInlinePreviewController._playAfterLoading
_OBJC_IVAR_$_QLInlinePreviewController._pageAfterLoading
_OBJC_IVAR_$_QLInlinePreviewController._observing
_OBJC_IVAR_$_QLInlinePreviewController._state
_OBJC_IVAR_$_QLInlinePreviewController._hostingLayerIsInWindowServer
_OBJC_IVAR_$_QLInlinePreviewController._sharingPreviewPanel
_OBJC_IVAR_$_QLInlinePreviewController._autoplay
_OBJC_IVAR_$_QLOverlayProgressHalfCircleLayer._roundup
_OBJC_IVAR_$_QLOverlayProgressDeterminateLayer._intermediateLayer
_OBJC_IVAR_$_QLOverlayProgressDeterminateLayer._contentLayer
_OBJC_IVAR_$_QLOverlayProgressDeterminateLayer._movingHalfCircleLayer
_OBJC_IVAR_$_QLOverlayProgressDeterminateLayer._fixedRightHalfCircleLayer
_OBJC_IVAR_$_QLOverlayProgressDeterminateLayer._maskLayer
_OBJC_IVAR_$_QLOverlayProgressDeterminateLayer._progress
_OBJC_IVAR_$_QLOverlayProgressLayer._maskLayer
_OBJC_IVAR_$_QLOverlayProgressLayer._contentLayer
_OBJC_IVAR_$_QLOverlayProgressLayer._progress
_OBJC_IVAR_$_QLOverlayProgressLayer._middleLayer
_OBJC_IVAR_$_QLOverlayProgressLayer._progressTimer
_OBJC_IVAR_$_QLOverlayBaseButtonLayer._backgroundLayer
_OBJC_IVAR_$_QLOverlayBaseButtonLayer._contentLayer
_OBJC_IVAR_$_QLOverlayBaseButtonLayer._firstMouseDownWhenEnabled
_OBJC_IVAR_$_QLOverlayBaseButtonLayer._action
_OBJC_IVAR_$_QLOverlayBaseButtonLayer._target
_OBJC_IVAR_$_QLOverlayBaseButtonLayer._smallSize
_OBJC_IVAR_$_QLOverlayButtonLayer._imageLayer
_OBJC_IVAR_$_QLOverlayButtonLayer._image
_OBJC_IVAR_$_QLOverlayButtonLayer._imageOffset
_OBJC_IVAR_$_QLOverlayProgressButtonLayer._progressLayer
_OBJC_IVAR_$_QLOverlayProgressButtonLayer._expanded
_OBJC_IVAR_$_QLOverlayProgressButtonLayer._collapseTimer
_OBJC_IVAR_$_QLOverlayProgressButtonLayer._ignoreNextProgressChange
_OBJC_IVAR_$_QLOverlayLoadingButtonLayer._loadingLayer
_OBJC_IVAR_$_QLOverlayMultiButtonLayer._imageLayers
_OBJC_IVAR_$_QLOverlayMultiButtonLayer._clickedIndex
_OBJC_IVAR_$_QLPreviewOverlayController._active
_OBJC_IVAR_$_QLPreviewOverlayController._dataSource
_OBJC_IVAR_$_QLPreviewOverlayController._overlayLayer
_OBJC_IVAR_$_QLPreviewOverlayController._overlayView
_OBJC_IVAR_$_QLPreviewOverlayController._mouseOver
_OBJC_IVAR_$_QLPreviewOverlayController._visibilityOptions
_OBJC_IVAR_$_QLPreviewOverlayController._playButtonLayer
_OBJC_IVAR_$_QLPreviewOverlayController._canExpand
_OBJC_IVAR_$_QLPreviewOverlayController._progressTimer
_OBJC_IVAR_$_QLPreviewOverlayController._leftPageButtonLayer
_OBJC_IVAR_$_QLPreviewOverlayController._rightPageButtonLayer
_OBJC_IVAR_$_QLPreviewOverlayController._overlayTrackingArea
_OBJC_IVAR_$_QLPreviewOverlayController._firstClick
_OBJC_IVAR_$_QLLoadingLayer._progressIndicatorLayer
_OBJC_IVAR_$_QLLoadingLayer._textLayer
_OBJC_IVAR_$_QLLoadingLayer._largeIndicator
_OBJC_IVAR_$_QLLoadingLayer._showText
_OBJC_IVAR_$_QLLoadingLayer._darkLayer
_OBJC_IVAR_$_QLCenteredTextLayer._textLayer
_OBJC_IVAR_$_QLCenteredTextLayer._whiteColor
_OBJC_IVAR_$_QLCustomTextLayer._text
_OBJC_IVAR_$_QLCustomTextLayer._attributes
_OBJC_IVAR_$_QLCustomTextLayer._attributedText
_OBJC_IVAR_$_QLCustomTextLayer._textSize
_OBJC_IVAR_$_QLCustomTextLayer._textMargins
_OBJC_IVAR_$_QLCustomTextLayer._animates
_OBJC_IVAR_$_QLDrawingLayer._drawingDelegate
_OBJC_IVAR_$_QLDisplayBundle._owner
_OBJC_IVAR_$_QLDisplayBundle._activation
_OBJC_IVAR_$_QLDisplayBundle._visibility
_OBJC_IVAR_$_QLDisplayBundle._isObservingOwner
_OBJC_IVAR_$_QLDisplayBundle._previewRef
_OBJC_IVAR_$_QLDisplayBundle._accessoryControllers
_OBJC_IVAR_$_QLDisplayBundle._initialOperationCategory
_OBJC_IVAR_$_QLDisplayBundle._activationCount
_OBJC_IVAR_$_QLPreviewDocumentDisplayBundle._preview
_OBJC_IVAR_$_QLFallbackDisplayBundle._textField
_OBJC_IVAR_$_QLImageAndTextLayer._userInterfaceLayoutDirection
_OBJC_IVAR_$_QLImageAndTextLayer._textLayer
_OBJC_IVAR_$_QLImageAndTextLayer._imageLayerContainer
_OBJC_IVAR_$_QLImageAndTextLayer._topTextLayer
_OBJC_IVAR_$_QLImageAndTextLayer._imageLayer
_OBJC_IVAR_$_QLImageAndTextLayer._margin
_OBJC_IVAR_$_QLImageAndTextLayer._tightLayout
_OBJC_IVAR_$_QLImageAndTextLayer._maxInfoSize
_OBJC_IVAR_$_QLImageAndTextLayer._defaultImageSize
_OBJC_IVAR_$_QLImageAndTextLayer._minInfoSize
_OBJC_IVAR_$_QLImageAndTextLayer._perspectiveLayout
_OBJC_IVAR_$_QLImageAndTextLayer._maxImageSize
_OBJC_IVAR_$_QLImageAndTextLayer._liveResize
_OBJC_IVAR_$_QLSubThumbnailLayer.image
_OBJC_IVAR_$_QLDynamicThumbnailLayer._pauseLock
_OBJC_IVAR_$_QLDynamicThumbnailLayer._isPaused
_OBJC_IVAR_$_QLDynamicThumbnailLayer._minThumbnailSize
_OBJC_IVAR_$_QLDynamicThumbnailLayer._previewItem
_OBJC_IVAR_$_QLDynamicThumbnailLayer._url
_OBJC_IVAR_$_QLDynamicThumbnailLayer._thumbnail
_OBJC_IVAR_$_QLDynamicThumbnailLayer._contentTypeUTIHint
_OBJC_IVAR_$_QLDynamicThumbnailLayer._subthumbnailNeedsDisplayRequested
_OBJC_IVAR_$_QLDynamicThumbnailLayer._needsPlaceHolder
_OBJC_IVAR_$_QLDynamicThumbnailLayer._frontLayer
_OBJC_IVAR_$_QLDynamicThumbnailLayer._hasSubthumbnailToRemove
_OBJC_IVAR_$_QLDynamicThumbnailLayer._hasSubthumbnailToShow
_OBJC_IVAR_$_QLDynamicThumbnailLayer._requestIndex
_OBJC_IVAR_$_QLDynamicThumbnailLayer._backLayer
_OBJC_IVAR_$_QLDynamicThumbnailLayer._loaded
_OBJC_IVAR_$_QLDynamicThumbnailLayer._thumbnailContentRect
_OBJC_IVAR_$_QLDynamicThumbnailLayer._maxThumbnailSize
_OBJC_IVAR_$_QLDynamicThumbnailLayer._showPlaceholderAfterTimeout
_OBJC_IVAR_$_QLTimeSlider._scrubber
_OBJC_IVAR_$_QLTimeSlider._uiElements
_OBJC_IVAR_$_QLTimeSlider._lastTimeString
_OBJC_IVAR_$_QLTimeSlider._timeAttributes
_OBJC_IVAR_$_QLTimeSlider._dataSource
_OBJC_IVAR_$_QLTimeSlider._refreshTimer
_OBJC_IVAR_$_QLTimeSlider._autoUpdates
_OBJC_IVAR_$_QLTimeSlider._duration
_OBJC_IVAR_$_QLTimeSlider._lastDrawPercentage
_OBJC_IVAR_$_QLTimeSlider._textHeight
_OBJC_IVAR_$_QLTimeSlider._negativeTextWidth
_OBJC_IVAR_$_QLTimeSlider._positiveTextWidth
_OBJC_IVAR_$_QLTimeSlider._wasPlayingBeforeTracking
_OBJC_IVAR_$_QLPathWatcher._watchedURLs
_OBJC_IVAR_$_QLPathWatcher._clientsByURL
_OBJC_IVAR_$_QLPathWatcher.watchQueue
_OBJC_IVAR_$_QLPathWatcher._throttle
_OBJC_IVAR_$_QLAccessibilityUIElement.identifier
_OBJC_IVAR_$_QLAccessibilityUIElement.delegate
_OBJC_IVAR_$_QLPreviewParts.registeredURLs
_OBJC_IVAR_$_QLPreviewParts.previewURL
_OBJC_IVAR_$_QLPreviewParts.outstandingURLs
_OBJC_IVAR_$_QLPreviewParts.encodingsForURLs
_OBJC_IVAR_$_QLThumbnailRequestReserved.thumbnail
_OBJC_IVAR_$_QLThumbnailRequest._reserved
_OBJC_IVAR_$_QLFocusBackgroundLayer._focusFrame
_OBJC_IVAR_$_QLTransitionView._transitionImage
_OBJC_IVAR_$_QLTransitionView._transitionFrame
_OBJC_IVAR_$_QLTransitionCrossFadeView._sourceLayer
_OBJC_IVAR_$_QLTransitionCrossFadeView._destinationLayer
_OBJC_IVAR_$_QLIndexSheetController._indexSheetView
_OBJC_IVAR_$_QLIndexSheetController._delegate
_OBJC_IVAR_$_QLIndexSheetController._controlsController
_OBJC_IVAR_$_QLCustomDisplayBundle._displayable
_OBJC_IVAR_$_QLCustomDisplayBundle._previewItem
_OBJC_IVAR_$_QLRemoteDisplayBundle._displayBundleID
_OBJC_IVAR_$_QLRemoteDisplayBundle._layer
_OBJC_IVAR_$_QLRemoteDisplayBundle._pageThumbnailsGenerationTable
_OBJC_IVAR_$_QLRemoteDisplayBundle._axElements
_OBJC_IVAR_$_QLRemoteDisplayBundle._uiElements
_OBJC_IVAR_$_QLRemoteDisplayBundle._openingApplicationInfo
_OBJC_IVAR_$_QLRemoteDisplayBundle._remotePort
_OBJC_IVAR_$_QLRemoteDisplayBundle._callbackSource
_OBJC_IVAR_$_QLRemoteDisplayBundle._remotePropertiesBeingUpdated
_OBJC_IVAR_$_QLRemoteDisplayBundle._contentFrame
_OBJC_IVAR_$_QLRemoteDisplayBundle._opaqueFrame
_OBJC_IVAR_$_QLRemoteDisplayBundle._borderFrame
_OBJC_IVAR_$_QLRemoteDisplayBundle._updatingFromRemoteDisplayBundle
_OBJC_IVAR_$_QLRemoteDisplayBundle._displayFlags
_OBJC_IVAR_$_QLRemoteDisplayBundle._highlighted
_OBJC_IVAR_$_QLRemoteDisplayBundle._canBeReused
_OBJC_IVAR_$_QLRemoteDisplayBundle._prefersLocalEventLoop
_OBJC_IVAR_$_QLRemoteDisplayBundle._playing
_OBJC_IVAR_$_QLRemoteDisplayBundle._duration
_OBJC_IVAR_$_QLRemoteDisplayBundle._currentTime
_OBJC_IVAR_$_QLRemoteDisplayBundle._hasAudio
_OBJC_IVAR_$_QLRemoteDisplayBundle._muted
_OBJC_IVAR_$_QLRemoteDisplayBundle._volume
_OBJC_IVAR_$_QLRemoteDisplayBundle._numberOfPages
_OBJC_IVAR_$_QLRemoteDisplayBundle._currentPage
_OBJC_IVAR_$_QLRemoteDisplayBundle._pageDisplay
_OBJC_IVAR_$_QLRemoteDisplayBundle._defaultPageThumbnailRatio
_OBJC_IVAR_$_QLRemoteDisplayBundle._showScrollerToChangePages
_OBJC_IVAR_$_QLRemoteDisplayBundle._totalScroll
_OBJC_IVAR_$_QLRemoteDisplayBundle._currentScroll
_OBJC_IVAR_$_QLRemoteDisplayBundle._totalHorizontalScroll
_OBJC_IVAR_$_QLRemoteDisplayBundle._currentHorizontalScroll
_OBJC_IVAR_$_QLRemoteDisplayBundle._backgroundStyle
_OBJC_IVAR_$_QLMediaUIScrubber._minValue
_OBJC_IVAR_$_QLMediaUIScrubber._maxValue
_OBJC_IVAR_$_QLMediaUIScrubber._valueTiming
_OBJC_IVAR_$_QLMediaUIScrubber._delegate
_OBJC_IVAR_$_QLMediaUIScrubber._timer
_OBJC_IVAR_$_QLSeamlessOpenerReserved.parameters
_OBJC_IVAR_$_QLSeamlessOpenerReserved.searchString
_OBJC_IVAR_$_QLSeamlessOpenerReserved.transientImage
_OBJC_IVAR_$_QLSeamlessOpenerReserved.transientWindow
_OBJC_IVAR_$_QLSeamlessOpenerReserved.additionalEventParamDescriptor
_OBJC_IVAR_$_QLSeamlessOpenerReserved.additionalAnimatingItems
_OBJC_IVAR_$_QLSeamlessOpenerReserved.delegate
_OBJC_IVAR_$_QLSeamlessOpenerReserved.closerDelegate
_OBJC_IVAR_$_QLSeamlessOpenerReserved.transientRetainCount
_OBJC_IVAR_$_QLSeamlessOpenerReserved.transientShouldAnimate
_OBJC_IVAR_$_QLSeamlessOpener._reserved
_OBJC_IVAR_$_QLPreviewBubbleReserved.previewItem
_OBJC_IVAR_$_QLPreviewBubbleReserved.representedURL
_OBJC_IVAR_$_QLPreviewBubbleReserved.preloadedItems
_OBJC_IVAR_$_QLPreviewBubbleReserved.controls
_OBJC_IVAR_$_QLPreviewBubbleReserved.parentWindow
_OBJC_IVAR_$_QLPreviewBubbleReserved.queue
_OBJC_IVAR_$_QLPreviewBubbleReserved.modes
_OBJC_IVAR_$_QLPreviewBubbleReserved.bubbleRef
_OBJC_IVAR_$_QLPreviewBubbleReserved.activateMonitorBlock
_OBJC_IVAR_$_QLPreviewBubbleReserved.animationType
_OBJC_IVAR_$_QLPreviewBubbleReserved.itemFrame
_OBJC_IVAR_$_QLPreviewBubbleReserved.animationSourceFrame
_OBJC_IVAR_$_QLPreviewBubbleReserved.animationContentFrame
_OBJC_IVAR_$_QLPreviewBubbleReserved.preferredEdge
_OBJC_IVAR_$_QLPreviewBubbleReserved.needsToSendPreviewItem
_OBJC_IVAR_$_QLPreviewBubbleReserved.windowLevel
_OBJC_IVAR_$_QLPreviewBubbleReserved.aimPoint
_OBJC_IVAR_$_QLPreviewBubbleReserved.maximumSize
_OBJC_IVAR_$_QLPreviewBubbleReserved.maxArea
_OBJC_IVAR_$_QLPreviewBubbleReserved.delegate
_OBJC_IVAR_$_QLPreviewBubbleReserved.modesAreCustom
_OBJC_IVAR_$_QLPreviewBubbleReserved.autoplays
_OBJC_IVAR_$_QLPreviewBubbleReserved.forcePreferredEdge
_OBJC_IVAR_$_QLPreviewBubbleReserved.eventMonitor
_OBJC_IVAR_$_QLPreviewBubbleReserved.seamlesslyOpening
_OBJC_IVAR_$_QLPreviewBubbleReserved.seamlesslyVisible
_OBJC_IVAR_$_QLPreviewBubbleReserved.seamlesslyClosed
_OBJC_IVAR_$_QLPreviewBubbleReserved.disableAnimation
_OBJC_IVAR_$_QLPreviewBubbleReserved.skipAnimationInvoke
_OBJC_IVAR_$_QLPreviewBubbleReserved.skipAlphaDuringOpenAnimation
_OBJC_IVAR_$_QLPreviewBubble._reserved
_OBJC_IVAR_$_QLSeamlessItemOpener._request
_OBJC_IVAR_$_QLSeamlessItemOpener._item
_OBJC_IVAR_$_QLSeamlessItemOpener._opener
_OBJC_IVAR_$_QLSeamlessItemOpener._bubble
_OBJC_IVAR_$_QLSeamlessItemOpener._previewPanel
_OBJC_IVAR_$_QLWindowEffect._window
_OBJC_IVAR_$_QLWindowEffect._childWindows
_OBJC_IVAR_$_QLWindowEffect._preparationBlock
_OBJC_IVAR_$_QLWindowEffect._completionBlock
_OBJC_IVAR_$_QLWindowEffect._effectID
_OBJC_IVAR_$_QLCGWindowEffect._cid
_OBJC_IVAR_$_QLCGWindowEffect._duration
_OBJC_IVAR_$_QLAnimationWindowEffect._animation
_OBJC_IVAR_$_QLWindowAnimation._windowEffect
_OBJC_IVAR_$_QLAnimationWindowEffect._cid
_OBJC_IVAR_$_QLAnimationWindowEffect._inverted
_OBJC_IVAR_$_QLAnimationWindowEffect._mainEffect
_OBJC_IVAR_$_QLAnimationWindowEffect._subEffects
_OBJC_IVAR_$_QLAnimationWindowEffect._windowID
_OBJC_IVAR_$_QLGenericAnimationEffect._object
_OBJC_IVAR_$_QLGenericAnimationEffect._key
_OBJC_IVAR_$_QLFadeWindowEffect._initialAlpha
_OBJC_IVAR_$_QLFadeWindowEffect._finalAlpha
_OBJC_IVAR_$_QLFadeWindowEffect._restoreAlpha
_OBJC_IVAR_$_QLPlopWindowEffect._fullFrame
_OBJC_IVAR_$_QLPropertyWindowEffect._fromValue
_OBJC_IVAR_$_QLPropertyWindowEffect._toValue
_OBJC_IVAR_$_QLPropertyWindowEffect._property
_OBJC_IVAR_$_QLScaleWindowEffect._cartoonish
_OBJC_IVAR_$_QLScaleWindowEffect._initialFrame
_OBJC_IVAR_$_QLScaleWindowEffect._finalFrame
_OBJC_IVAR_$_QLScaleWindowEffect._fullFrame
_OBJC_IVAR_$_QLScaleWindowEffect._autoAdaptDuration
_OBJC_IVAR_$_QLScaleWindowEffect._resizeWindow
_OBJC_IVAR_$_QLNonUniformScaleWindowEffect._scaleFrame
_OBJC_IVAR_$_QLNonUniformScaleWindowEffect._isSimpleScale
_OBJC_IVAR_$_QLMultiZoomScaleWindowEffect._visualInitialFrame
_OBJC_IVAR_$_QLPreviewSchemeHandler._item
_OBJC_IVAR_$_QLPreviewSchemeHandler.icon
_OBJC_IVAR_$_QLSeamlessDocumentOpener._url
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._openingState
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._loadingState
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._showingState
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._port
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._displayState
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._deferredTimeoutTimer
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._loadingProgress
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._animationBehavior
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._info
_OBJC_IVAR_$_QLSeamlessDocumentConcreteOpener._automaticallyAdjustWindowPosition
_OBJC_IVAR_$_QLProgressIndicatorLayer._circular
_OBJC_IVAR_$_QLProgressIndicatorLayer._whiteColor
_OBJC_IVAR_$_QLProgressIndicatorLayer._maskLayer
_OBJC_IVAR_$_QLProgressIndicatorLayer._fillLayer
_OBJC_IVAR_$_QLProgressIndicatorLayer._contentLayer
_OBJC_IVAR_$_QLProgressIndicatorLayer._progressValue
_OBJC_IVAR_$_QLPreviewDocumentReserved.item
_OBJC_IVAR_$_QLPreviewDocumentReserved.preview
_OBJC_IVAR_$_QLPreviewDocumentReserved.state
_OBJC_IVAR_$_QLPreviewDocumentReserved.loadingDisplayBundle
_OBJC_IVAR_$_QLPreviewDocumentReserved.displayBundle
_OBJC_IVAR_$_QLPreviewDocumentReserved.previewView
_OBJC_IVAR_$_QLPreviewDocumentReserved.externalDocument
_OBJC_IVAR_$_QLPreviewDocumentReserved.passwordViewController
_OBJC_IVAR_$_QLPreviewDocumentReserved.password
_OBJC_IVAR_$_QLPreviewDocument._reserved
_OBJC_IVAR_$_QLPreviewBackgroundView._arrowEdge
_OBJC_IVAR_$_QLPreviewBackgroundView._arrowPosition
_OBJC_IVAR_$_QLPreviewTitleCell._textAlignment
_OBJC_IVAR_$_QLSeamlessDocumentConcreteCloser._displayState
_OBJC_IVAR_$_QLSeamlessDocumentConcreteCloser._window
_OBJC_IVAR_$_QLSeamlessDocumentConcreteCloser._isTerminating
_OBJC_IVAR_$_QLSeamlessDocumentConcreteCloser._launcherPort
_OBJC_IVAR_$_QLMediaUIControl._enabled
_OBJC_IVAR_$_QLMediaUIControl._target
_OBJC_IVAR_$_QLMediaUIControl._action
_OBJC_IVAR_$_QLMediaUIControl._highlighted
_OBJC_IVAR_$_QLMediaUIControl._tracking
_OBJC_IVAR_$_QLBubbleWindowController._bubble
_OBJC_IVAR_$_QLBubbleWindow._bubble
_OBJC_IVAR_$_QLBubbleWindow._absolutePosition
_OBJC_IVAR_$_QLBubbleReserved.windowController
_OBJC_IVAR_$_QLBubbleReserved.contentView
_OBJC_IVAR_$_QLBubbleReserved.parentWindow
_OBJC_IVAR_$_QLBubbleReserved.controlsController
_OBJC_IVAR_$_QLBubbleReserved.controls
_OBJC_IVAR_$_QLBubbleReserved.appearanceName
_OBJC_IVAR_$_QLBubbleReserved.activateMonitorBlock
_OBJC_IVAR_$_QLBubbleReserved.debugFrameWindow
_OBJC_IVAR_$_QLBubbleReserved.animator
_OBJC_IVAR_$_QLBubbleReserved.delegate
_OBJC_IVAR_$_QLBubbleReserved.animationType
_OBJC_IVAR_$_QLBubbleReserved.sourceFrame
_OBJC_IVAR_$_QLBubbleReserved.animationSourceFrame
_OBJC_IVAR_$_QLBubbleReserved.animationContentFrame
_OBJC_IVAR_$_QLBubbleReserved.preferredEdge
_OBJC_IVAR_$_QLBubbleReserved.usedEdge
_OBJC_IVAR_$_QLBubbleReserved.savedVisible
_OBJC_IVAR_$_QLBubbleReserved.windowLevel
_OBJC_IVAR_$_QLBubbleReserved.aimPoint
_OBJC_IVAR_$_QLBubbleReserved.forcePreferredEdge
_OBJC_IVAR_$_QLBubbleReserved.forceTitleBar
_OBJC_IVAR_$_QLBubbleReserved.forceNoArrow
_OBJC_IVAR_$_QLBubbleReserved.preventsActivation
_OBJC_IVAR_$_QLBubbleReserved.skipAnimationInvoke
_OBJC_IVAR_$_QLBubbleReserved.skipAlphaDuringOpenAnimation
_OBJC_IVAR_$_QLBubbleReserved.ignoreItemFrameWhenResizing
_OBJC_IVAR_$_QLBubbleReserved.neverResize
_OBJC_IVAR_$_QLBubbleReserved.mouseDownCanMoveBubble
_OBJC_IVAR_$_QLBubbleReserved.bubbleWasManuallyMoved
_OBJC_IVAR_$_QLBubbleReserved.controlAlignment
_OBJC_IVAR_$_QLBubbleReserved.eventMonitor
_OBJC_IVAR_$_QLBubbleReserved.open
_OBJC_IVAR_$_QLBubbleReserved.closing
_OBJC_IVAR_$_QLBubbleReserved.effect
_OBJC_IVAR_$_QLBubbleAnimator._animationTimer
_OBJC_IVAR_$_QLBubbleAnimator._previousSize
_OBJC_IVAR_$_QLBubbleAnimator._targetSize
_OBJC_IVAR_$_QLBubbleAnimator._previousItemFrame
_OBJC_IVAR_$_QLBubbleAnimator._targetItemFrame
_OBJC_IVAR_$_QLBubbleAnimator._bubble
_OBJC_IVAR_$_QLBubbleAnimator._targetEdge
_OBJC_IVAR_$_QLBubbleAnimator._sizeInitialAbsoluteTime
_OBJC_IVAR_$_QLBubbleAnimator._itemFrameAcceleration
_OBJC_IVAR_$_QLBubbleAnimator._itemFrameInitialAbsoluteTime
_OBJC_IVAR_$_QLConfiguration._siteWhileList
_OBJC_IVAR_$_QLConfiguration._schemesMapping
_OBJC_IVAR_$_QLControlButton._common
_OBJC_IVAR_$_QLControlButton._originalImage
_OBJC_IVAR_$_QLControlButton._style
_OBJC_IVAR_$_QLControlButton._shown
_OBJC_IVAR_$_QLControlButton._alternate
_OBJC_IVAR_$_QLControlButton._sendActionOnMouseDown
_OBJC_IVAR_$_QLControlButton._segmentedStyle
_OBJC_IVAR_$_QLControlButton._tooltipMargin
_OBJC_IVAR_$_QLControlsContainerView._controlsController
_OBJC_IVAR_$_QLControlsCenteringView._controlsController
_OBJC_IVAR_$_QLControlsController._alignment
_OBJC_IVAR_$_QLControlsController._controlsDict
_OBJC_IVAR_$_QLControlsController._collectionKeys
_OBJC_IVAR_$_QLControlsController._buttons
_OBJC_IVAR_$_QLControlsController._shownControlElements
_OBJC_IVAR_$_QLControlsController._buttonStyle
_OBJC_IVAR_$_QLControlsController._controlsView
_OBJC_IVAR_$_QLControlsController._centeringView
_OBJC_IVAR_$_QLControlsController._containerView
_OBJC_IVAR_$_QLControlsController._segmentedControls
_OBJC_IVAR_$_QLControlsController._delegate
_OBJC_IVAR_$_QLControlsController._effectiveWidth
_OBJC_IVAR_$_QLControlsController._needsRelayout
_OBJC_IVAR_$_QLControlsController._controlSize
_OBJC_IVAR_$_QLControlsController._extraWidth
_OBJC_IVAR_$_QLControlsController._contentView
_OBJC_IVAR_$_QLTooltipView._position
_OBJC_IVAR_$_QLControlTooltip._textField
_OBJC_IVAR_$_QLControlTooltip._anchorRect
_OBJC_IVAR_$_QLControlTooltip._verticallyPositioned
_OBJC_IVAR_$_QLControlTooltip._parentWindow
_OBJC_IVAR_$_QLRemoteConfiguration.configurationKey
_OBJC_IVAR_$_QLRemoteConfiguration.queue
_OBJC_IVAR_$_QLRemoteConfiguration.updateQueue
_OBJC_IVAR_$_QLRemoteConfiguration.configuration
_OBJC_IVAR_$_QLPreviewWindowController._rootView
_OBJC_IVAR_$_QLPreviewWindowController._contentView
_OBJC_IVAR_$_QLPreviewWindowController._titleBarView
_OBJC_IVAR_$_QLPreviewWindowController._titleBarVisibility
_OBJC_IVAR_$_QLPreviewWindowController._leftControlsController
_OBJC_IVAR_$_QLPreviewWindowController._rightControlsController
_OBJC_IVAR_$_QLPreviewWindowController._titleField
_OBJC_IVAR_$_QLPreviewWindowController._tightControls
_OBJC_IVAR_$_QLPreviewWindowController._tightControlsDelta
_OBJC_IVAR_$_QLPreviewWindowController._rightControlsView
_OBJC_IVAR_$_QLPreviewWindowController._leftControlsView
_OBJC_IVAR_$_QLPreviewWindowController._packing
_OBJC_IVAR_$_QLPreviewWindowController._controlsAtBottom
_OBJC_IVAR_$_QLPreviewWindowController._closeButton
_OBJC_IVAR_$_QLPreviewWindowController._zoomButton
_OBJC_IVAR_$_QLPreviewWindowController._fullscreenButton
_OBJC_IVAR_$_QLPreviewWindowController._visibleButtonTypes
_OBJC_IVAR_$_QLPreviewWindowController._isBeingMoved
_OBJC_IVAR_$_QLPreviewHighlightItemLayer._keyAppearance
_OBJC_IVAR_$_QLScrollerLayer._imp
_OBJC_IVAR_$_QLScrollerLayer._trackLayer
_OBJC_IVAR_$_QLScrollerLayer._knobLayer
_OBJC_IVAR_$_QLScrollerLayer._hideTrack
_OBJC_IVAR_$_QLScrollerLayer._delegate
_OBJC_IVAR_$_QLScrollController._scrollerImpPair
_OBJC_IVAR_$_QLScrollController._verticalScroller
_OBJC_IVAR_$_QLScrollController._horizontalScroller
_OBJC_IVAR_$_QLScrollController._view
_OBJC_IVAR_$_QLScrollController._controlSize
_OBJC_IVAR_$_QLScrollController._hostingLayer
_OBJC_IVAR_$_QLScrollController._trackingArea
_OBJC_IVAR_$_QLScrollController._delegate
_OBJC_IVAR_$_QLPreviewSwipeController._transitionPreviewView
_OBJC_IVAR_$_QLPreviewSwipeController._completionBlock
_OBJC_IVAR_$_QLPreviewSwipeController._validateSwipe
_OBJC_IVAR_$_QLPreviewSwipeController._swipeStatus
_OBJC_IVAR_$_QLPreviewSwipeController._previewView
_OBJC_IVAR_$_QLPreviewSwipeController._forwardSwipe
_OBJC_IVAR_$_QLPreviewSwipeController._transitionWindow
_OBJC_IVAR_$_QLPreviewSwipeController._status
_OBJC_IVAR_$_QLPreviewCacheManager._recentDocuments
_OBJC_IVAR_$_QLPreviewCacheManager._preloadedItems
_OBJC_IVAR_$_QLPreviewCacheManager._preloadedDocuments
_OBJC_IVAR_$_QLPreviewCacheManager._maxRecents
_OBJC_IVAR_$_QLPreviewCacheManager._previewView
_OBJC_IVAR_$_QLPreviewPasswordBackgroundView._drawsBackground
_OBJC_IVAR_$_QLPreviewPasswordViewController.validateButton
_OBJC_IVAR_$_QLPreviewPasswordViewController.passwordField
_OBJC_IVAR_$_QLPreviewPasswordViewController._hasEnteredWrongPassword
_OBJC_IVAR_$_QLPreviewPasswordViewController.descriptionField
_OBJC_IVAR_$_QLPreviewPasswordViewController._document
_OBJC_IVAR_$_QLMediaUIConcreteValueTiming._value
_OBJC_IVAR_$_QLMediaUIConcreteValueTiming._timeStamp
_OBJC_IVAR_$_QLMediaUIConcreteValueTiming._rate
_OBJC_CLASS_$_QLPreviewSchemeHandler_vnode
_OBJC_METACLASS_$_QLPreviewSchemeHandler_vnode
_OBJC_CLASS_$_QLPreviewPanelReserved
_OBJC_METACLASS_$_QLPreviewPanelReserved
_OBJC_CLASS_$_QLPreviewPanelManagerReserved
_OBJC_METACLASS_$_QLPreviewPanelManagerReserved
_OBJC_CLASS_$__QLKVOWaiter
_OBJC_METACLASS_$__QLKVOWaiter
_OBJC_CLASS_$_QLPanelPreviewView
_OBJC_METACLASS_$_QLPanelPreviewView
_OBJC_CLASS_$_QLPreviewPanelController
_OBJC_METACLASS_$_QLPreviewPanelController
_OBJC_CLASS_$_QLFullscreenControlsPanel
_OBJC_METACLASS_$_QLFullscreenControlsPanel
_OBJC_CLASS_$_QLFullscreenPageControlWindow
_OBJC_METACLASS_$_QLFullscreenPageControlWindow
_OBJC_CLASS_$_QLFullscreenWindow
_OBJC_METACLASS_$_QLFullscreenWindow
_OBJC_METACLASS_$_QLBackgroundFullscreenWindow
_OBJC_CLASS_$_QLBackgroundFullscreenWindow
_OBJC_CLASS_$_QLFullscreenController
_OBJC_METACLASS_$_QLFullscreenController
_OBJC_CLASS_$_QLGradientLayer
_OBJC_METACLASS_$_QLGradientLayer
_OBJC_METACLASS_$_QLIndexSheetTextLayer
_OBJC_CLASS_$_QLIndexSheetTextLayer
_OBJC_CLASS_$_QLIndexSheetThumbnailLayer
_OBJC_METACLASS_$_QLIndexSheetThumbnailLayer
_OBJC_CLASS_$_QLIndexSheetView
_OBJC_METACLASS_$_QLIndexSheetView
_OBJC_CLASS_$_QLSwipeAnimation
_OBJC_METACLASS_$_QLSwipeAnimation
_OBJC_METACLASS_$_QLPreviewViewReserved
_OBJC_CLASS_$_QLPreviewViewReserved
_OBJC_CLASS_$_QLPreviewContainerView
_OBJC_METACLASS_$_QLPreviewContainerView
_OBJC_CLASS_$_QLOverlayProgressHalfCircleLayer
_OBJC_METACLASS_$_QLOverlayProgressHalfCircleLayer
_OBJC_CLASS_$_QLOverlayProgressDeterminateLayer
_OBJC_METACLASS_$_QLOverlayProgressDeterminateLayer
_OBJC_CLASS_$_QLOverlayProgressMaskLayer
_OBJC_METACLASS_$_QLOverlayProgressMaskLayer
_OBJC_CLASS_$_QLOverlayProgressIndeterminateLayer
_OBJC_METACLASS_$_QLOverlayProgressIndeterminateLayer
_OBJC_CLASS_$_QLOverlayProgressBackgroundLayer
_OBJC_METACLASS_$_QLOverlayProgressBackgroundLayer
_OBJC_CLASS_$_QLOverlayProgressForegroundLayer
_OBJC_METACLASS_$_QLOverlayProgressForegroundLayer
_OBJC_CLASS_$_QLOverlayProgressLayer
_OBJC_METACLASS_$_QLOverlayProgressLayer
_OBJC_CLASS_$_QLOverlayBaseButtonLayer
_OBJC_METACLASS_$_QLOverlayButtonAccessoryLayer
_OBJC_CLASS_$_QLOverlayButtonAccessoryLayer
_OBJC_METACLASS_$_QLOverlayButtonImageLayer
_OBJC_CLASS_$_QLOverlayButtonImageLayer
_OBJC_CLASS_$_QLOverlayButtonBackgroundLayer
_OBJC_METACLASS_$_QLOverlayButtonBackgroundLayer
_OBJC_CLASS_$_QLOverlayButtonContentLayer
_OBJC_METACLASS_$_QLOverlayButtonContentLayer
_OBJC_METACLASS_$_QLOverlayBaseButtonLayer
_OBJC_CLASS_$_QLOverlayButtonLayer
_OBJC_METACLASS_$_QLOverlayButtonLayer
_OBJC_CLASS_$_QLOverlayProgressButtonLayer
_OBJC_METACLASS_$_QLOverlayProgressButtonLayer
_OBJC_METACLASS_$_QLOverlayLoadingButtonLayer
_OBJC_CLASS_$_QLOverlayLoadingButtonLayer
_OBJC_CLASS_$_QLOverlayMultiButtonLayer
_OBJC_METACLASS_$_QLOverlayMultiButtonLayer
_OBJC_CLASS_$_QLOverlayView
_OBJC_METACLASS_$_QLOverlayView
_OBJC_CLASS_$_QLPreviewOverlayController
_OBJC_METACLASS_$_QLPreviewOverlayController
_OBJC_METACLASS_$_QLEventLessLayer
_OBJC_CLASS_$_QLEventLessLayer
_OBJC_METACLASS_$_QLDrawingLayer
_OBJC_CLASS_$_QLDrawingLayer
_OBJC_CLASS_$_QLFallbackDisplayBundle
_OBJC_METACLASS_$_QLFallbackDisplayBundle
_OBJC_CLASS_$_QLSubThumbnailLayer
_OBJC_METACLASS_$_QLSubThumbnailLayer
_OBJC_CLASS_$_QLFullscreenTimeSlider
_OBJC_METACLASS_$_QLFullscreenTimeSlider
_OBJC_CLASS_$_QLSimpleTimeSlider
_OBJC_METACLASS_$_QLSimpleTimeSlider
_OBJC_CLASS_$_QLPathWatcher
_OBJC_METACLASS_$_QLPathWatcher
_OBJC_CLASS_$_QLPreviewURLProtocol
_OBJC_METACLASS_$_QLPreviewURLProtocol
_OBJC_CLASS_$_QLThumbnailRequestReserved
_OBJC_METACLASS_$_QLThumbnailRequestReserved
_OBJC_CLASS_$_QLFocusBackgroundLayer
_OBJC_METACLASS_$_QLFocusBackgroundLayer
_OBJC_CLASS_$_QLTransitionView
_OBJC_METACLASS_$_QLTransitionView
_OBJC_CLASS_$_QLTransitionCrossFadeView
_OBJC_METACLASS_$_QLTransitionCrossFadeView
_OBJC_METACLASS_$_QLEventLessView
_OBJC_CLASS_$_QLEventLessView
_OBJC_CLASS_$_QLPreviewHUDWindow
_OBJC_METACLASS_$_QLPreviewHUDWindow
_OBJC_CLASS_$_QLControlsPanel
_OBJC_METACLASS_$_QLControlsPanel
_OBJC_CLASS_$_QLIndexSheetController
_OBJC_METACLASS_$_QLIndexSheetController
_OBJC_CLASS_$_QLCustomDisplayBundle
_OBJC_METACLASS_$_QLCustomDisplayBundle
_OBJC_CLASS_$_QLRemoteDisplayBundle
_OBJC_METACLASS_$_QLRemoteDisplayBundle
_OBJC_CLASS_$_QLSeamlessOpenerReserved
_OBJC_METACLASS_$_QLSeamlessOpenerReserved
_OBJC_CLASS_$_QLPreviewBubbleReserved
_OBJC_METACLASS_$_QLPreviewBubbleReserved
_OBJC_CLASS_$_QLSeamlessItemOpener
_OBJC_METACLASS_$_QLSeamlessItemOpener
_OBJC_CLASS_$_QLCGWindowEffect
_OBJC_METACLASS_$_QLCGWindowEffect
_OBJC_METACLASS_$_QLRotateWindowEffect
_OBJC_CLASS_$_QLRotateWindowEffect
_OBJC_METACLASS_$_QLBlendWindowEffect
_OBJC_CLASS_$_QLBlendWindowEffect
_OBJC_METACLASS_$_QLSlideWindowEffect
_OBJC_CLASS_$_QLSlideWindowEffect
_OBJC_METACLASS_$_QLShrinkWindowEffect
_OBJC_CLASS_$_QLShrinkWindowEffect
_OBJC_CLASS_$_QLWindowAnimation
_OBJC_METACLASS_$_QLWindowAnimation
_OBJC_CLASS_$_QLGenericAnimationEffect
_OBJC_METACLASS_$_QLGenericAnimationEffect
_OBJC_CLASS_$_QLPlopWindowEffect
_OBJC_METACLASS_$_QLPlopWindowEffect
_OBJC_CLASS_$_QLPropertyWindowEffect
_OBJC_METACLASS_$_QLPropertyWindowEffect
_OBJC_CLASS_$_QLNonUniformScaleWindowEffect
_OBJC_METACLASS_$_QLNonUniformScaleWindowEffect
_OBJC_METACLASS_$_QLNonUniformScalePopWindowEffect
_OBJC_CLASS_$_QLNonUniformScalePopWindowEffect
_OBJC_METACLASS_$_QLScalePopWindowEffect
_OBJC_CLASS_$_QLScalePopWindowEffect
_OBJC_CLASS_$_QLMultiZoomScaleWindowEffect
_OBJC_METACLASS_$_QLMultiZoomScaleWindowEffect
_OBJC_CLASS_$_QLPreviewSchemeHandler_http
_OBJC_CLASS_$_QLPreviewSchemeHandler
_OBJC_METACLASS_$_QLPreviewSchemeHandler
_OBJC_METACLASS_$_QLPreviewSchemeHandler_http
_OBJC_CLASS_$_QLPreviewSchemeHandler_dict
_OBJC_METACLASS_$_QLPreviewSchemeHandler_dict
_OBJC_CLASS_$_QLPreviewSchemeHandler_tel
_OBJC_METACLASS_$_QLPreviewSchemeHandler_tel
_OBJC_CLASS_$_QLPreviewSchemeHandler_messaging
_OBJC_METACLASS_$_QLPreviewSchemeHandler_messaging
_OBJC_CLASS_$_QLPreviewSchemeHandler_distantfs
_OBJC_METACLASS_$_QLPreviewSchemeHandler_distantfs
_OBJC_CLASS_$_QLPreviewSchemeHandler_map
_OBJC_METACLASS_$_QLPreviewSchemeHandler_map
_OBJC_METACLASS_$_QLPreviewSchemeHandler_maplegacy
_OBJC_CLASS_$_QLPreviewSchemeHandler_maplegacy
_OBJC_METACLASS_$_QLPreviewSchemeHandler_event
_OBJC_CLASS_$_QLPreviewSchemeHandler_event
_OBJC_METACLASS_$_QLPreviewSchemeHandler_addressbook
_OBJC_CLASS_$_QLPreviewSchemeHandler_addressbook
_OBJC_CLASS_$_QLSeamlessDocumentConcreteOpener
_OBJC_METACLASS_$_QLSeamlessDocumentConcreteOpener
_OBJC_METACLASS_$_QLPreviewDocumentReserved
_OBJC_CLASS_$_QLPreviewDocumentReserved
_OBJC_METACLASS_$_QLiPhotoExport
_OBJC_CLASS_$_QLiPhotoExport
_OBJC_CLASS_$_QLPreviewBackgroundView
_OBJC_METACLASS_$_QLPreviewBackgroundView
_OBJC_METACLASS_$_QLPreviewTitleCell
_OBJC_CLASS_$_QLPreviewTitleCell
_OBJC_CLASS_$_QLSeamlessDocumentConcreteCloser
_OBJC_METACLASS_$_QLSeamlessDocumentConcreteCloser
_OBJC_CLASS_$_QLBubbleWindowController
_OBJC_METACLASS_$_QLBubbleWindowController
_OBJC_CLASS_$_QLBubbleControlView
_OBJC_METACLASS_$_QLBubbleControlView
_OBJC_CLASS_$_QLBubbleWindow
_OBJC_METACLASS_$_QLBubbleWindow
_OBJC_CLASS_$_QLBubbleReserved
_OBJC_METACLASS_$_QLBubbleReserved
_OBJC_CLASS_$_QLBubbleAnimator
_OBJC_METACLASS_$_QLBubbleAnimator
_OBJC_METACLASS_$_QLFrameDebugView
_OBJC_CLASS_$_QLFrameDebugView
_OBJC_CLASS_$_QLFrameDebugWindow
_OBJC_METACLASS_$_QLFrameDebugWindow
_OBJC_CLASS_$_QLConfiguration
_OBJC_METACLASS_$_QLConfiguration
_OBJC_CLASS_$_QLControlButton
_OBJC_METACLASS_$_QLControlButton
_OBJC_METACLASS_$_QLPreviewControlSeparator
_OBJC_CLASS_$_QLPreviewControlSeparator
_OBJC_CLASS_$_QLControlsContainerView
_OBJC_METACLASS_$_QLControlsContainerView
_OBJC_CLASS_$_QLControlsCenteringView
_OBJC_METACLASS_$_QLControlsCenteringView
_OBJC_CLASS_$_QLControlsController
_OBJC_METACLASS_$_QLControlsController
_OBJC_METACLASS_$_QLTooltipView
_OBJC_CLASS_$_QLTooltipView
_OBJC_CLASS_$_QLControlTooltip
_OBJC_METACLASS_$_QLControlTooltip
_OBJC_METACLASS_$_QLPreviewWindowButton
_OBJC_CLASS_$_QLPreviewWindowButton
_OBJC_CLASS_$_QLPreviewWindowButtonCell
_OBJC_METACLASS_$_QLPreviewWindowButtonCell
_OBJC_METACLASS_$_QLPreviewWindowCloseButtonCell
_OBJC_CLASS_$_QLPreviewWindowCloseButtonCell
_OBJC_METACLASS_$_QLPreviewWindowZoomButtonCell
_OBJC_CLASS_$_QLPreviewWindowZoomButtonCell
_OBJC_METACLASS_$_QLPreviewWindowFullscreenButtonCell
_OBJC_CLASS_$_QLPreviewWindowFullscreenButtonCell
_OBJC_CLASS_$_QLPreviewTitleBarView
_OBJC_METACLASS_$_QLPreviewTitleBarView
_OBJC_CLASS_$_QLPreviewWindowController
_OBJC_METACLASS_$_QLPreviewWindowController
_OBJC_CLASS_$_QLPreviewHighlightItemLayer
_OBJC_METACLASS_$_QLPreviewHighlightItemLayer
_OBJC_CLASS_$_QLOverlayBorderView
_OBJC_METACLASS_$_QLOverlayBorderView
_OBJC_CLASS_$_QLScrollerLayer
_OBJC_METACLASS_$_QLScrollerLayer
_OBJC_CLASS_$_QLScrollController
_OBJC_METACLASS_$_QLScrollController
_OBJC_CLASS_$_QLPreviewSwipeController
_OBJC_METACLASS_$_QLPreviewSwipeController
_OBJC_CLASS_$_QLPreviewCacheManager
_OBJC_METACLASS_$_QLPreviewCacheManager
_OBJC_METACLASS_$_QLPreviewPasswordBackgroundView
_OBJC_CLASS_$_QLPreviewPasswordBackgroundView
_OBJC_CLASS_$_QLPreviewPasswordViewController
_OBJC_METACLASS_$_QLPreviewPasswordViewController
-[QLPreviewPanel _isRunningInBackgroundApp].isRunningInBackgrounApp
__QLPreviewWillEjectNotification
_QLAccessibilitySliderIdentifier
_QLAccessibilitySliderIndicatorIdentifier
_QLAccessibilityTimeFieldIdentifier
_QLControlsDidUpdateNotification
_QLPreviewControlsButtonsKey
_QLPreviewControlsCollectionsKey
_QLPreviewControlActionKey
_QLPreviewControlTitleKey
_QLPreviewControlKeyEquivalentKey
_QLPreviewControlTooltipKey
_QLPreviewControlAccessibilityDescriptionKey
_QLPreviewControlSmallImageNameKey
_QLPreviewControlLargeImageNameKey
_QLPreviewControlMaxWidthKey
_QLPreviewControlShrinkableKey
_QLPreviewControlMenuItemsKey
___53-[QLRemoteConfiguration updateConfigurationBlocking:]_block_invoke42.key
__QLPreviewItemHandlerKey
__qlAlreadyTested
__sharedPreviewPanel
__sharedPreviewPanelController
_isInitializingPanel
+[QLPreviewPanelController _defaultNoItemsTitle].QLPreviewDefaultNoItemsTitle
__previewAnchor
-[QLIndexSheetThumbnailLayer updateThumbnail].options
-[QLIndexSheetThumbnailLayer discardThumbnail].backgroundColor
-[QLIndexSheetThumbnailLayer accessibilityAttributeNames].__accessibilityAttributeNames
-[QLIndexSheetView accessibilityAttributeNames]._myAttributes
-[QLIndexSheetView accessibilityAttributeValue:]._indexSheetAttributes
__approvalSession
__QLPreviewSupportedContentTypes
__QLPreviewDefaultSupportedDisplayBundleIDs
-[QLPreviewView setEnableDragNDrop:].pScreamAndShout
-[QLPreviewView enableDragNDrop].pScreamAndShout
-[QLInlinePreviewController setSharingPreviewPanel:].pScreamAndShout
-[QLDisplayBundle validateURLSecureAccess:]._acceptableSchemes
-[QLDisplayBundle validateURLSecureAccess:]._acceptableNetworkScheme
___sharedInstance
-[QLDynamicThumbnailLayer _setPlaceHolder]._placeHolder
__thumbnailProperties
__playImage
__pauseImage
__soundOnImage
__soundOffImage
_qtKitInited
_qtKitHandle
-[QLSimpleTimeSlider _QTUIDrawingOptions].result
-[QLSimpleTimeSlider drawRect:].myQTUIDraw
+[QLPreviewView(QLVNodes) setVNodeDelegate:].pScreamAndShout
__sharedWatcher
+[NSKeyedUnarchiver(QuickLookAdditions) _ql_secureUnarchiveObjectWithData:].allowedClasses
+[NSKeyedUnarchiver(QuickLookAdditions) _ql_secureUnarchiveObjectWithData:].onceToken
_urlToPreviews
_urlToAttachmentData
_urlToProtocols
_urlToAttachmentDescriptions
_protocolQueue
+[QLPreviewURLProtocol _errorForAbort].result
_gClickInKnobSlotJumps
-[QLPreviewScroller drawLayer:inContext:].knobBorderImage1
-[QLPreviewScroller drawLayer:inContext:].knobMiddleImage
-[QLPreviewScroller drawLayer:inContext:].knobBorderImage2
-[QLPreviewScroller drawLayer:inContext:].trackBorderImage1
-[QLPreviewScroller drawLayer:inContext:].trackMiddleImage
-[QLPreviewScroller drawLayer:inContext:].trackBorderImage2
__portToDisplayBundleTable
__getRemotePreviewsCallbackQueue._remotePreviewsCallbackQueue
__getRemotePreviewsMappingQueue._remotePreviewsMappingQueue
__getRemotePreviewsRequestQueue._remotePreviewsRequestQueue
-[QLSeamlessOpener _openItems:async:local:realAppPID:].pScreamAndShout
+[QLPreviewBubble presentBubbleForItem:parentWindow:itemFrame:maximumSize:preferredEdge:filterMask:autocloseMask:]._currentBubble
__globalSeamlesslyOpening
+[QLSeamlessOpeningFakeCloserDelegate closerDelegate].closerDelegate
-[QLPreviewSchemeHandler_tel icon].telIcon
__handlerClassForScheme
__getImageForGENERIC_URL.result
__getImageForFILE_SERVER.result
_isUIHelperMaybeRunning
_hasCheckedUIHelperActiveState
+[QLSeamlessDocumentOpener _isUIHelperMaybeRunning].queue
_activeDocumentOpeners
__documentOpeners
_haveSeenAWindowOpening
__observingWindowActivation
_showingWindows
__ignorePIDCheck
__placeholderImageRef
-[QLThumbnailLayer update].options
-[QLThumbnailLayer discard].backgroundColor
__getSeamlessOpeningQueue._seamlessOpeningQueue
__QLSeamlessOpeningSupportForRunningApplication.once
__QLSeamlessOpeningSupportForRunningApplication.currentApplicationSupport
__imageKitFrameworkHandle
+[QLConfiguration sharedConfiguration].once
_sharedInstance
-[QLPreviewWindowButtonCell accessibilityAttributeNames].attributes
+[QLOverlayBorderView overlayBorderColor].once
+[QLOverlayBorderView overlayBorderColor].overlayBorderColor
_gClickInKnobSlotJumps
_QLPreviewDefaultLoadingTitle
___QLClientLogDomain
___QLClientProgressiveLogDomain
___QLForwardLogDomain
___QLGeneratorLogDomain
___QLIILogDomain
___QLImageIOLogDomain
___QLMachLogDomain
___QLPathLogDomain
___QLQueueLogDomain
___QLRequestLogDomain
___QLRequestProgressiveLogDomain
___QLSessionLogDomain
___QLTimingLogDomain
___QLUtilsLogDomain
___QLUIHelperLogDomain
_OBJC_CLASS_$_QLAccessibilityUIElement
_OBJC_CLASS_$_QLAnimationWindowEffect
_OBJC_CLASS_$_QLBubble
_OBJC_CLASS_$_QLCenteredTextLayer
_OBJC_CLASS_$_QLControlCommon
_OBJC_CLASS_$_QLControlSegment
_OBJC_CLASS_$_QLControlSegmentedControl
_OBJC_CLASS_$_QLCustomTextLayer
_OBJC_CLASS_$_QLDisplayBundle
_OBJC_CLASS_$_QLDisplayBundleLoader
_OBJC_CLASS_$_QLDrawingHelpers
_OBJC_CLASS_$_QLDynamicThumbnailLayer
_OBJC_CLASS_$_QLFadeWindowEffect
_OBJC_CLASS_$_QLImageAndTextDisplayBundle
_OBJC_CLASS_$_QLImageAndTextLayer
_OBJC_CLASS_$_QLImageAndTextPropertySlice
_OBJC_CLASS_$_QLImageAndTextViewController
_OBJC_CLASS_$_QLImageWrapper
_OBJC_CLASS_$_QLInlinePreviewController
_OBJC_CLASS_$_QLLineView
_OBJC_CLASS_$_QLLoadingLayer
_OBJC_CLASS_$_QLMediaUIConcreteValueTiming
_OBJC_CLASS_$_QLMediaUIControl
_OBJC_CLASS_$_QLMediaUIScrubber
_OBJC_CLASS_$_QLMediaUIValueTiming
_OBJC_CLASS_$_QLModernAquaHUDBackgroudView
_OBJC_CLASS_$_QLPopWindowEffect
_OBJC_CLASS_$_QLPreviewBubble
_OBJC_CLASS_$_QLPreviewCustomDocument
_OBJC_CLASS_$_QLPreviewDocument
_OBJC_CLASS_$_QLPreviewDocumentDisplayBundle
_OBJC_CLASS_$_QLPreviewHighlight
_OBJC_CLASS_$_QLPreviewImageWindow
_OBJC_CLASS_$_QLPreviewPageLayer
_OBJC_CLASS_$_QLPreviewPageLoadingLayer
_OBJC_CLASS_$_QLPreviewPageNavigationView
_OBJC_CLASS_$_QLPreviewPageNumberOverlayController
_OBJC_CLASS_$_QLPreviewPanel
_OBJC_CLASS_$_QLPreviewPanelManager
_OBJC_CLASS_$_QLPreviewParts
_OBJC_CLASS_$_QLPreviewPathOverlayController
_OBJC_CLASS_$_QLPreviewScroller
_OBJC_CLASS_$_QLPreviewSlideshow
_OBJC_CLASS_$_QLPreviewTextOverlayController
_OBJC_CLASS_$_QLPreviewView
_OBJC_CLASS_$_QLProgressIndicatorLayer
_OBJC_CLASS_$_QLRemoteConfiguration
_OBJC_CLASS_$_QLScaleWindowEffect
_OBJC_CLASS_$_QLSeamlessDocumentAnimator
_OBJC_CLASS_$_QLSeamlessDocumentCloser
_OBJC_CLASS_$_QLSeamlessDocumentOpener
_OBJC_CLASS_$_QLSeamlessOpener
_OBJC_CLASS_$_QLSeamlessOpeningFakeCloserDelegate
_OBJC_CLASS_$_QLSeamlessOpeningItemInfo
_OBJC_CLASS_$_QLTextLayer
_OBJC_CLASS_$_QLThumbnailLayer
_OBJC_CLASS_$_QLThumbnailRequest
_OBJC_CLASS_$_QLTimeSlider
_OBJC_CLASS_$_QLTintedImageRep
_OBJC_CLASS_$_QLTooltipTextFieldCell
_OBJC_CLASS_$_QLTransformWindowEffect
_OBJC_CLASS_$_QLTransitionWindow
_OBJC_CLASS_$_QLUIHelperObject
_OBJC_CLASS_$_QLVibrantGenericView
_OBJC_CLASS_$_QLWarpingWindowEffect
_OBJC_CLASS_$_QLWindowEffect
_OBJC_CLASS_$_QLWindowEffectsLibrary
_OBJC_IVAR_$_QLBubble._reserved
_OBJC_IVAR_$_QLControlCommon._canShowMenu
_OBJC_IVAR_$_QLControlCommon._controlIdentifier
_OBJC_IVAR_$_QLControlCommon._menuProvider
_OBJC_IVAR_$_QLControlCommon._menuTimer
_OBJC_IVAR_$_QLControlCommon._qlControl
_OBJC_IVAR_$_QLControlCommon._tooltipWindow
_OBJC_IVAR_$_QLControlCommon._trackingArea
_OBJC_IVAR_$_QLControlCommon._trackingButton
_OBJC_IVAR_$_QLControlSegment._action
_OBJC_IVAR_$_QLControlSegment._alternate
_OBJC_IVAR_$_QLControlSegment._common
_OBJC_IVAR_$_QLControlSegment._frame
_OBJC_IVAR_$_QLControlSegment._keyEquivalent
_OBJC_IVAR_$_QLControlSegment._originalImage
_OBJC_IVAR_$_QLControlSegment._segmentIndex
_OBJC_IVAR_$_QLControlSegment._segmentedControl
_OBJC_IVAR_$_QLControlSegment._segmentedStyle
_OBJC_IVAR_$_QLControlSegment._sendActionOnMouseDown
_OBJC_IVAR_$_QLControlSegment._shown
_OBJC_IVAR_$_QLControlSegment._style
_OBJC_IVAR_$_QLControlSegment._target
_OBJC_IVAR_$_QLControlSegment._tooltipMargin
_OBJC_IVAR_$_QLControlSegmentedControl._controlSegments
_OBJC_IVAR_$_QLDisplayBundleLoader._displayBundlesById
_OBJC_IVAR_$_QLImageAndTextDisplayBundle._imageAndTextLayer
_OBJC_IVAR_$_QLImageAndTextDisplayBundle._imageAndTextViewController
_OBJC_IVAR_$_QLImageAndTextDisplayBundle._uiElements
_OBJC_IVAR_$_QLImageAndTextDisplayBundle._wantsLayer
_OBJC_IVAR_$_QLImageAndTextPropertySlice._label
_OBJC_IVAR_$_QLImageAndTextPropertySlice._value
_OBJC_IVAR_$_QLImageAndTextViewController._iconView
_OBJC_IVAR_$_QLImageAndTextViewController._lastSliceToBottomConstraint
_OBJC_IVAR_$_QLImageAndTextViewController._propertySlice1
_OBJC_IVAR_$_QLImageAndTextViewController._propertySlices
_OBJC_IVAR_$_QLImageAndTextViewController._slicesContainerView
_OBJC_IVAR_$_QLImageAndTextViewController._subTitleField
_OBJC_IVAR_$_QLImageAndTextViewController._titleField
_OBJC_IVAR_$_QLImageWrapper._discarded
_OBJC_IVAR_$_QLImageWrapper._image
_OBJC_IVAR_$_QLImageWrapper._url
_OBJC_IVAR_$_QLPreviewCustomDocument._customView
_OBJC_IVAR_$_QLPreviewHighlight._frame
_OBJC_IVAR_$_QLPreviewHighlight._transform
_OBJC_IVAR_$_QLPreviewPageLayer._contentLayer
_OBJC_IVAR_$_QLPreviewPageLayer._generating
_OBJC_IVAR_$_QLPreviewPageLayer._highlightLayer
_OBJC_IVAR_$_QLPreviewPageLayer._highlightMode
_OBJC_IVAR_$_QLPreviewPageLayer._navigationView
_OBJC_IVAR_$_QLPreviewPageLayer._page
_OBJC_IVAR_$_QLPreviewPageLayer._progressIndicatorLayer
_OBJC_IVAR_$_QLPreviewPageNavigationView._dataSource
_OBJC_IVAR_$_QLPreviewPageNavigationView._deltas
_OBJC_IVAR_$_QLPreviewPageNavigationView._enableUpdates
_OBJC_IVAR_$_QLPreviewPageNavigationView._gradientPositions
_OBJC_IVAR_$_QLPreviewPageNavigationView._maskLayer
_OBJC_IVAR_$_QLPreviewPageNavigationView._needsUpdate
_OBJC_IVAR_$_QLPreviewPageNavigationView._pageLayers
_OBJC_IVAR_$_QLPreviewPageNavigationView._pagesLayer
_OBJC_IVAR_$_QLPreviewPageNavigationView._rootLayer
_OBJC_IVAR_$_QLPreviewPageNavigationView._scrollController
_OBJC_IVAR_$_QLPreviewPageNavigationView._scrollValue
_OBJC_IVAR_$_QLPreviewPageNumberOverlayController._dataSource
_OBJC_IVAR_$_QLPreviewPageNumberOverlayController._displayTimer
_OBJC_IVAR_$_QLPreviewPathOverlayController._eventMonitor
_OBJC_IVAR_$_QLPreviewScroller._currentScroll
_OBJC_IVAR_$_QLPreviewScroller._enableAnimation
_OBJC_IVAR_$_QLPreviewScroller._indicatorWindowLevel
_OBJC_IVAR_$_QLPreviewScroller._knobLayer
_OBJC_IVAR_$_QLPreviewScroller._mode
_OBJC_IVAR_$_QLPreviewScroller._pageIndicator
_OBJC_IVAR_$_QLPreviewScroller._totalScroll
_OBJC_IVAR_$_QLPreviewTextOverlayController._containingOverlayView
_OBJC_IVAR_$_QLPreviewTextOverlayController._darkMode
_OBJC_IVAR_$_QLPreviewTextOverlayController._hostView
_OBJC_IVAR_$_QLPreviewTextOverlayController._pathOverlayLayer
_OBJC_IVAR_$_QLPreviewTextOverlayController._textOverlayField
_OBJC_IVAR_$_QLSeamlessOpeningFakeCloserDelegate._mapTable
_OBJC_IVAR_$_QLSeamlessOpeningItemInfo._contentRect
_OBJC_IVAR_$_QLSeamlessOpeningItemInfo._sourceFrame
_OBJC_IVAR_$_QLSeamlessOpeningItemInfo._sourceImage
_OBJC_IVAR_$_QLThumbnailLayer._contentRect
_OBJC_IVAR_$_QLThumbnailLayer._iconMode
_OBJC_IVAR_$_QLThumbnailLayer._item
_OBJC_IVAR_$_QLThumbnailLayer._thumbnail
_OBJC_IVAR_$_QLThumbnailLayer._thumbnailImage
_OBJC_IVAR_$_QLThumbnailLayer._thumbnailMaxSize
_OBJC_IVAR_$_QLThumbnailLayer._thumbnailSize
_OBJC_IVAR_$_QLTintedImageRep._imageRep
_OBJC_IVAR_$_QLTintedImageRep._rescale
_OBJC_IVAR_$_QLTintedImageRep._tintColor
_OBJC_IVAR_$_QLTransformWindowEffect._finalTransform
_OBJC_IVAR_$_QLTransformWindowEffect._initialTransform
_OBJC_IVAR_$_QLUIHelperObject._port
_OBJC_IVAR_$_QLUIHelperObject._serverPort
_OBJC_IVAR_$_QLWarpingWindowEffect._pointBlock
_OBJC_IVAR_$_QLWarpingWindowEffect._setupBlock
_OBJC_METACLASS_$_QLAccessibilityUIElement
_OBJC_METACLASS_$_QLAnimationWindowEffect
_OBJC_METACLASS_$_QLBubble
_OBJC_METACLASS_$_QLCenteredTextLayer
_OBJC_METACLASS_$_QLControlCommon
_OBJC_METACLASS_$_QLControlSegment
_OBJC_METACLASS_$_QLControlSegmentedControl
_OBJC_METACLASS_$_QLCustomTextLayer
_OBJC_METACLASS_$_QLDisplayBundle
_OBJC_METACLASS_$_QLDisplayBundleLoader
_OBJC_METACLASS_$_QLDrawingHelpers
_OBJC_METACLASS_$_QLDynamicThumbnailLayer
_OBJC_METACLASS_$_QLFadeWindowEffect
_OBJC_METACLASS_$_QLImageAndTextDisplayBundle
_OBJC_METACLASS_$_QLImageAndTextLayer
_OBJC_METACLASS_$_QLImageAndTextPropertySlice
_OBJC_METACLASS_$_QLImageAndTextViewController
_OBJC_METACLASS_$_QLImageWrapper
_OBJC_METACLASS_$_QLInlinePreviewController
_OBJC_METACLASS_$_QLLineView
_OBJC_METACLASS_$_QLLoadingLayer
_OBJC_METACLASS_$_QLMediaUIConcreteValueTiming
_OBJC_METACLASS_$_QLMediaUIControl
_OBJC_METACLASS_$_QLMediaUIScrubber
_OBJC_METACLASS_$_QLMediaUIValueTiming
_OBJC_METACLASS_$_QLModernAquaHUDBackgroudView
_OBJC_METACLASS_$_QLPopWindowEffect
_OBJC_METACLASS_$_QLPreviewBubble
_OBJC_METACLASS_$_QLPreviewCustomDocument
_OBJC_METACLASS_$_QLPreviewDocument
_OBJC_METACLASS_$_QLPreviewDocumentDisplayBundle
_OBJC_METACLASS_$_QLPreviewHighlight
_OBJC_METACLASS_$_QLPreviewImageWindow
_OBJC_METACLASS_$_QLPreviewPageLayer
_OBJC_METACLASS_$_QLPreviewPageLoadingLayer
_OBJC_METACLASS_$_QLPreviewPageNavigationView
_OBJC_METACLASS_$_QLPreviewPageNumberOverlayController
_OBJC_METACLASS_$_QLPreviewPanel
_OBJC_METACLASS_$_QLPreviewPanelManager
_OBJC_METACLASS_$_QLPreviewParts
_OBJC_METACLASS_$_QLPreviewPathOverlayController
_OBJC_METACLASS_$_QLPreviewScroller
_OBJC_METACLASS_$_QLPreviewSlideshow
_OBJC_METACLASS_$_QLPreviewTextOverlayController
_OBJC_METACLASS_$_QLPreviewView
_OBJC_METACLASS_$_QLProgressIndicatorLayer
_OBJC_METACLASS_$_QLRemoteConfiguration
_OBJC_METACLASS_$_QLScaleWindowEffect
_OBJC_METACLASS_$_QLSeamlessDocumentAnimator
_OBJC_METACLASS_$_QLSeamlessDocumentCloser
_OBJC_METACLASS_$_QLSeamlessDocumentOpener
_OBJC_METACLASS_$_QLSeamlessOpener
_OBJC_METACLASS_$_QLSeamlessOpeningFakeCloserDelegate
_OBJC_METACLASS_$_QLSeamlessOpeningItemInfo
_OBJC_METACLASS_$_QLTextLayer
_OBJC_METACLASS_$_QLThumbnailLayer
_OBJC_METACLASS_$_QLThumbnailRequest
_OBJC_METACLASS_$_QLTimeSlider
_OBJC_METACLASS_$_QLTintedImageRep
_OBJC_METACLASS_$_QLTooltipTextFieldCell
_OBJC_METACLASS_$_QLTransformWindowEffect
_OBJC_METACLASS_$_QLTransitionWindow
_OBJC_METACLASS_$_QLUIHelperObject
_OBJC_METACLASS_$_QLVibrantGenericView
_OBJC_METACLASS_$_QLWarpingWindowEffect
_OBJC_METACLASS_$_QLWindowEffect
_OBJC_METACLASS_$_QLWindowEffectsLibrary
_QLDisplayBundleDisplayStateCurrentPageKey
_QLDisplayBundleDisplayStateCurrentScrollKey
_QLDisplayBundleDisplayStateCurrentTimeKey
_QLDisplayBundleErrorDomain
_QLDisplayBundleErrorHideOpenButtonKey
_QLDisplayBundleHintErrorKey
_QLDisplayBundleHintPasswordKey
_QLDisplayBundleHintURLKey
_QLDisplayBundleHintURLRequestKey
_QLDisplayBundleHintUseRemoteKey
_QLImageAndTextPropertyLabelKey
_QLImageAndTextPropertyValueKey
_QLLayoutConstrainsToNaturalSizeKey
_QLLayoutNaturalSizeKey
_QLMediaUIRequestConcreteImplementation
_QLMediaUIRequestConcreteObject
_QLMediaUIUpdateBindings
_QLOpenButtonAppIconKey
_QLOpenButtonAppNameKey
_QLOpenButtonAppURLKey
_QLOpenButtonInfoApplicationsBlockKey
_QLOpenButtonInfoImageKey
_QLOpenButtonInfoTightTitleKey
_QLOpenButtonInfoTitleKey
_QLPreviewControlLargeImageRescaleKey
_QLPreviewControlLargeImageSizeKey
_QLPreviewControlSendActionOnMouseDownKey
_QLPreviewControlSmallImageRescaleKey
_QLPreviewControlSmallImageSizeKey
_QLPreviewItemGetDefaultOpenButtonInfo
_QLPreviewItemGetItemForPreview
_QLPreviewItemGetItemForThumbnail
_QLPreviewItemLaunchURL
_QLPreviewItemSetItemForPreview
_QLPreviewItemSetItemForThumbnail
_QLPreviewPanelDidChangeCurrentURLNotification
_QLPreviewPanelWillChangeCurrentURLNotification
_QLPreviewPropertyDisplayBundleScreenshotKey
_QLPreviewTestBehavior
_QLSharedPreviewPanelWillOpenNotificationName
_QLSizingContainerProportionKey
_QLSizingDeltaPositionKey
_QLSizingMinimumSizeKey
_QLSizingNaturalSizeKey
_QLSizingOnlyRatioKey
_QLSizingRatioKey
_QLSizingUserDefinedSizeKey
_QuickLookUIVersionNumber
_QuickLookUIVersionString
__QLDeactivateSlowMotion
__QLPreviewDocumentCopyDisplayBundle
__QLPreviewDocumentCopyPageAsImageFromDisplayBundle
__QLPreviewDocumentCopyPageTextFromDisplayBundle
__QLPreviewDocumentDrawPageFromDisplayBundle
__QLPreviewDocumentGetPageCountInDisplayBundle
__QLPreviewDocumentGetPageSizeInDisplayBundle
__QLPreviewDocumentIsPaginatedInDisplayBundle
__QLPreviewDocumentReleaseDisplayBundle
__QLRemotePreviewCallbackQLRemotePreviewCallbacks_subsystem
__QLSeamlessOpeningSupportForRunningApplication
__QLThumbnailRequestSetThumbnailWithDataRepresentation
__QLThumbnailRequestSetThumbnailWithURLRepresentation
__QLTitleBarHeight
__getSeamlessOpeningQueue
_AEDuplicateDesc
_CARenderServerGetPort
_CARenderServerStart
_CATransform3DIdentity
_CATransform3DMakeRotation
_CATransform3DMakeScale
_CATransform3DMakeTranslation
_CATransform3DScale
_CATransform3DTranslate
_CFAbsoluteTimeGetCurrent
_CFArrayCreate
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFAttributedStringCreate
_CFBooleanGetTypeID
_CFBooleanGetValue
_CFBundleCopyInfoDictionaryForURL
_CFCopyDescription
_CFDataCreateMutable
_CFDataGetBytePtr
_CFDataGetBytes
_CFDataGetLength
_CFDictionaryCreate
_CFDictionaryCreateMutableCopy
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFDictionarySetValue
_CFEqual
_CFGetTypeID
_CFHostCreateWithName
_CFHostGetReachability
_CFHostStartInfoResolution
_CFMachPortCreateRunLoopSource
_CFMachPortInvalidate
_CFMakeCollectable
_CFNumberCreate
_CFPreferencesCopyAppValue
_CFRelease
_CFRetain
_CFRunLoopAddSource
_CFRunLoopCopyCurrentMode
_CFRunLoopGetCurrent
_CFRunLoopGetMain
_CFRunLoopPerformBlock
_CFRunLoopRemoveSource
_CFRunLoopRunInMode
_CFRunLoopStop
_CFRunLoopWakeUp
_CFStringCompare
_CFStringConvertIANACharSetNameToEncoding
_CFStringCreateWithFormat
_CFStringGetLength
_CFStringGetTypeID
_CFURLCopyResourcePropertyForKey
_CFURLCreateCopyAppendingPathComponent
_CFURLCreateStringByAddingPercentEscapes
_CFURLCreateWithString
_CFURLGetFileSystemRepresentation
_CFURLGetTypeID
_CGAffineTransformIdentity
_CGAffineTransformMakeScale
_CGAffineTransformTranslate
_CGBitmapContextCreate
_CGBitmapContextCreateImage
_CGColorCreate
_CGColorCreateGenericGray
_CGColorCreateGenericRGB
_CGColorGetComponents
_CGColorGetConstantColor
_CGColorRelease
_CGColorSpaceCreateDeviceRGB
_CGColorSpaceCreateWithName
_CGColorSpaceGetNumberOfComponents
_CGColorSpaceRelease
_CGContextAddArc
_CGContextAddEllipseInRect
_CGContextAddLineToPoint
_CGContextAddPath
_CGContextAddRect
_CGContextBeginPath
_CGContextBeginTransparencyLayer
_CGContextClear
_CGContextClearRect
_CGContextClip
_CGContextClosePath
_CGContextDrawImage
_CGContextDrawPath
_CGContextDrawRadialGradient
_CGContextEOClip
_CGContextEndTransparencyLayer
_CGContextFillPath
_CGContextFillRect
_CGContextMoveToPoint
_CGContextRestoreGState
_CGContextRotateCTM
_CGContextSaveGState
_CGContextScaleCTM
_CGContextSetAlpha
_CGContextSetBlendMode
_CGContextSetCompositeOperation
_CGContextSetFillColorWithColor
_CGContextSetGrayFillColor
_CGContextSetLineCap
_CGContextSetLineWidth
_CGContextSetShouldSmoothFonts
_CGContextSetTextMatrix
_CGContextStrokePath
_CGContextTranslateCTM
_CGEventCreateData
_CGEventCreateMouseEvent
_CGEventGetIntegerValueField
_CGEventGetLocation
_CGEventGetType
_CGEventGetUnflippedLocation
_CGEventPost
_CGEventSetLocation
_CGEventTapCreate
_CGEventTapEnable
_CGGradientCreateWithColorComponents
_CGImageCreateWithImageInRect
_CGImageDestinationAddImage
_CGImageDestinationCreateWithData
_CGImageDestinationFinalize
_CGImageGetHeight
_CGImageGetWidth
_CGImageRetain
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateWithURL
_CGPathAddArc
_CGPathAddLineToPoint
_CGPathAddRect
_CGPathCloseSubpath
_CGPathCreateMutable
_CGPathMoveToPoint
_CGPointCreateDictionaryRepresentation
_CGPointZero
_CGRectContainsPoint
_CGRectContainsRect
_CGRectCreateDictionaryRepresentation
_CGRectEqualToRect
_CGRectGetHeight
_CGRectGetMaxX
_CGRectGetMaxY
_CGRectGetMidX
_CGRectGetMidY
_CGRectGetMinX
_CGRectGetMinY
_CGRectGetWidth
_CGRectInset
_CGRectIntegral
_CGRectIsEmpty
_CGRectMakeWithDictionaryRepresentation
_CGRectNull
_CGRectUnion
_CGRectZero
_CGSCopySpecifiedWindowShape
_CGSCopyWindowGroup
_CGSDisableUpdateToken
_CGSDragWindowRelativeToMouse
_CGSGetRegionBounds
_CGSGetWindowGeometry
_CGSGetWindowTags
_CGSInvokeTransition
_CGSMainConnectionID
_CGSMoveWindow
_CGSNewRegionWithRect
_CGSNewTransition
_CGSReenableUpdateToken
_CGSRegionRelease
_CGSRegisterConnectionNotifyProc
_CGSReleaseTransition
_CGSRemoveConnectionNotifyProc
_CGSResetWindows
_CGSSetWindowAlpha
_CGSSetWindowClipShape
_CGSSetWindowShadowAndRimParametersWithStretch
_CGSSetWindowTags
_CGSSetWindowTransformAtPlacement
_CGSSetWindowWarp
_CGSizeCreateDictionaryRepresentation
_CGSizeZero
_CGWindowLevelForKey
_CGWindowListCreateImage
_CGWindowListCreateImageFromArray
_CTFontCreateUIFontForLanguage
_CTLineCreateWithAttributedString
_CTLineDraw
_CTLineGetImageBounds
_CTLineGetTypographicBounds
_CVPixelBufferGetBaseAddress
_CVPixelBufferGetBytesPerRow
_CVPixelBufferGetHeight
_CVPixelBufferGetWidth
_CVPixelBufferLockBaseAddress
_CVPixelBufferUnlockBaseAddress
_CoreDragChangeBehaviors
_CoreDragCreateWithPasteboard
_CoreDragSetDragWindow
_CoreDragStartDragging
_DAApprovalSessionCreate
_DAApprovalSessionScheduleWithRunLoop
_DADiskCopyDescription
_DARegisterDiskEjectApprovalCallback
_DARegisterDiskUnmountApprovalCallback
_DCSCopyRecordsForHeadword
_DCSCopyRecordsForSearchString
_DCSCreateHeadwordList
_DCSDictionaryGetBaseURL
_DCSDictionaryGetIdentifier
_DCSGetActiveDictionaries
_DCSRecordCopyData
_DCSRecordCopyDataURL
_DCSRecordGetDictionary
_GetIconRef
_GetProcessPID
_IOPMAssertionCreate
_IOPMAssertionRelease
_LSCopyApplicationURLsForURL
_LSCopyDefaultApplicationURLForURL
_LSOpenURLsWithRole
_MDPlistBytesAppendPlist
_MDPlistBytesCreateMutable
_MDPlistBytesGetByteVector
_MDPlistBytesGetByteVectorCount
_NDR_record
_NSAccessibilityActionDescription
_NSAccessibilityButtonRole
_NSAccessibilityChildrenAttribute
_NSAccessibilityCloseButtonSubrole
_NSAccessibilityDecrementAction
_NSAccessibilityDescriptionAttribute
_NSAccessibilityEditedAttribute
_NSAccessibilityEnabledAttribute
_NSAccessibilityFocusedAttribute
_NSAccessibilityFullScreenAttribute
_NSAccessibilityFullScreenButtonSubrole
_NSAccessibilityHandleFocusChanged
_NSAccessibilityHorizontalOrientationValue
_NSAccessibilityImageRole
_NSAccessibilityIncrementAction
_NSAccessibilityListRole
_NSAccessibilityMaxValueAttribute
_NSAccessibilityMinValueAttribute
_NSAccessibilityMovedNotification
_NSAccessibilityOrientationAttribute
_NSAccessibilityParentAttribute
_NSAccessibilityPositionAttribute
_NSAccessibilityPostNotification
_NSAccessibilityPressAction
_NSAccessibilityProgressIndicatorRole
_NSAccessibilityRoleAttribute
_NSAccessibilityRoleDescription
_NSAccessibilityRoleDescriptionAttribute
_NSAccessibilityRoleDescriptionForUIElement
_NSAccessibilitySelectedAttribute
_NSAccessibilitySelectedChildrenAttribute
_NSAccessibilitySelectedChildrenChangedNotification
_NSAccessibilitySizeAttribute
_NSAccessibilitySliderRole
_NSAccessibilityStaticTextRole
_NSAccessibilitySubroleAttribute
_NSAccessibilityTimelineSubrole
_NSAccessibilityTitleAttribute
_NSAccessibilityTitleUIElementAttribute
_NSAccessibilityTopLevelUIElementAttribute
_NSAccessibilityUnignoredAncestor
_NSAccessibilityUnignoredChildren
_NSAccessibilityValueAttribute
_NSAccessibilityValueIndicatorRole
_NSAccessibilityWindowAttribute
_NSAccessibilityZoomButtonSubrole
_NSApp
_NSAppearanceNameVibrantDark
_NSAppearanceNameVibrantLight
_NSAppleNoRedisplayAppearancePreferenceChanged
_NSApplicationDidBecomeActiveNotification
_NSApplicationDidChangeScreenParametersNotification
_NSApplicationDidResignActiveNotification
_NSApplicationWillResignActiveNotification
_NSApplicationWillTerminateNotification
_NSArgumentBinding
_NSBeep
_NSCalibratedRGBColorSpace
_NSContainsRect
_NSDefaultRunLoopMode
_NSDeviceRGBColorSpace
_NSDisableScreenUpdates
_NSDivideRect
_NSDragPboard
_NSDrawThreePartImage
_NSEnableScreenUpdates
_NSEqualPoints
_NSEqualRects
_NSEqualSizes
_NSEventTrackingRunLoopMode
_NSFilenamesPboardType
_NSFontAttributeName
_NSForegroundColorAttributeName
_NSGlobalDomain
_NSImageNameShareTemplate
_NSInsetRect
_NSIntegralRect
_NSIntegralRectWithOptions
_NSIntersectionRect
_NSIntersectsRect
_NSInvalidArgumentException
_NSIsEmptyRect
_NSKeyValueChangeNewKey
_NSKeyValueChangeNotificationIsPriorKey
_NSKeyValueChangeOldKey
_NSLocalizedDescriptionKey
_NSLog
_NSMapGet
_NSMapInsert
_NSMapRemove
_NSMaxValueBinding
_NSMinValueBinding
_NSModalPanelRunLoopMode
_NSMouseInRect
_NSNegateBooleanTransformerName
_NSNullPlaceholderBindingOption
_NSObservedKeyPathKey
_NSObservedObjectKey
_NSOptionsKey
_NSParagraphStyleAttributeName
_NSPointInRect
_NSRectFill
_NSRunLoopCommonModes
_NSScrollerPagingBehaviorDefault
_NSSearchPathForDirectoriesInDomains
_NSSelectorFromString
_NSSharingServiceNameAddToSafariReadingList
_NSShouldRetainWithZone
_NSSizeFromString
_NSStringFromClass
_NSStringFromRect
_NSStringFromSelector
_NSStringFromSize
_NSTargetBinding
_NSURLEffectiveIconKey
_NSURLErrorDomain
_NSURLErrorFailingURLStringErrorKey
_NSURLLocalizedNameKey
_NSURLPboardType
_NSURLTypeIdentifierKey
_NSUndefinedKeyException
_NSUnionRect
_NSValueTransformerNameBindingOption
_NSViewBoundsDidChangeNotification
_NSViewFrameDidChangeNotification
_NSWindowDidBecomeKeyNotification
_NSWindowDidBecomeMainNotification
_NSWindowDidChangeBackingPropertiesNotification
_NSWindowDidDeminiaturizeNotification
_NSWindowDidMoveNotification
_NSWindowDidOrderOnScreenNotification
_NSWindowDidResignKeyNotification
_NSWindowDidResignMainNotification
_NSWindowDidResizeNotification
_NSWindowWillCloseNotification
_NSWindowWillMiniaturizeNotification
_NSWindowWillMoveNotification
_NSWindowWillOrderOnScreenNotification
_NSWorkspaceWillSleepNotification
_NSZeroPoint
_NSZeroRect
_NSZeroSize
_OBJC_CLASS_$_CAAnimationGroup
_OBJC_CLASS_$_CABasicAnimation
_OBJC_CLASS_$_CAFilter
_OBJC_CLASS_$_CAKeyframeAnimation
_OBJC_CLASS_$_CALayer
_OBJC_CLASS_$_CALayerHost
_OBJC_CLASS_$_CAMediaTimingFunction
_OBJC_CLASS_$_CAScrollLayer
_OBJC_CLASS_$_CATextLayer
_OBJC_CLASS_$_CATransaction
_OBJC_CLASS_$_CAValueFunction
_OBJC_CLASS_$_NSAnimation
_OBJC_CLASS_$_NSAnimationContext
_OBJC_CLASS_$_NSAppearance
_OBJC_CLASS_$_NSAppleEventDescriptor
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBezierPath
_OBJC_CLASS_$_NSBitmapImageRep
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSButton
_OBJC_CLASS_$_NSButtonCell
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSColorSpace
_OBJC_CLASS_$_NSConditionLock
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSCursor
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFont
_OBJC_CLASS_$_NSFontManager
_OBJC_CLASS_$_NSGradient
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSImageRep
_OBJC_CLASS_$_NSImageView
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLayoutConstraint
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMenu
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableParagraphStyle
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPanel
_OBJC_CLASS_$_NSPasteboard
_OBJC_CLASS_$_NSPopoverFrame
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSProtocolChecker
_OBJC_CLASS_$_NSResponder
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSRunningApplication
_OBJC_CLASS_$_NSScreen
_OBJC_CLASS_$_NSScrollerImp
_OBJC_CLASS_$_NSScrollerImpPair
_OBJC_CLASS_$_NSSegmentedControl
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSShadow
_OBJC_CLASS_$_NSSharingService
_OBJC_CLASS_$_NSSharingServicePicker
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTextField
_OBJC_CLASS_$_NSTextFieldCell
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSTrackingArea
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLProtocol
_OBJC_CLASS_$_NSURLRequest
_OBJC_CLASS_$_NSURLResponse
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSView
_OBJC_CLASS_$_NSViewController
_OBJC_CLASS_$_NSVisualEffectView
_OBJC_CLASS_$_NSWindow
_OBJC_CLASS_$_NSWindowController
_OBJC_CLASS_$_NSWorkspace
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_METACLASS_$_CALayer
_OBJC_METACLASS_$_CATextLayer
_OBJC_METACLASS_$_NSAnimation
_OBJC_METACLASS_$_NSButton
_OBJC_METACLASS_$_NSButtonCell
_OBJC_METACLASS_$_NSImageRep
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSPanel
_OBJC_METACLASS_$_NSPopoverFrame
_OBJC_METACLASS_$_NSResponder
_OBJC_METACLASS_$_NSSegmentedControl
_OBJC_METACLASS_$_NSTextFieldCell
_OBJC_METACLASS_$_NSURLProtocol
_OBJC_METACLASS_$_NSView
_OBJC_METACLASS_$_NSViewController
_OBJC_METACLASS_$_NSVisualEffectView
_OBJC_METACLASS_$_NSWindow
_OBJC_METACLASS_$_NSWindowController
_PAMarkOperationEnd
_PAMarkOperationStart
_PlotIconRefInContext
_QLAdaptSizeInSize
_QLAdaptSizeOutSize
_QLAdaptSizeToRect
_QLAdjustRectInRect
_QLBubbleControlIdentifierKey
_QLBubbleControlKeyEquivalentKey
_QLBubbleControlLeftAlignedKey
_QLBubbleControlShrinkableKey
_QLBubbleControlTightTitleKey
_QLBubbleControlTitleKey
_QLBubbleControlURLKey
_QLContextCreateGrayColorSpace
_QLContextCreateRGBColorSpace
_QLContextSetGrayFillColor
_QLContextSetGrayStrokeColor
_QLCopyIconImageFromURL
_QLCopyURLQueryDictionary
_QLCreateImageWithBitmapContext
_QLCreateImageWithBlock
_QLCreateMallocedBitmapContextWithSize
_QLDrawDebugRect
_QLDrawGrayLinearGradient
_QLError
_QLIconCreateBackAndFrontLayerImages
_QLPreviewBubbleControlAddToReadingListIdentifier
_QLPreviewBubbleControlDefaultOpenIdentifier
_QLPreviewBubbleCopyLaunchURL
_QLPreviewBubbleCopySeamlessOpeningInformation
_QLPreviewBubbleCreate
_QLPreviewBubbleGetUsedEdge
_QLPreviewBubbleGetWindowID
_QLPreviewBubbleHide
_QLPreviewBubbleInvalidate
_QLPreviewBubbleIsVisible
_QLPreviewBubbleSetButtonClickHandler
_QLPreviewBubbleSetDispatchQueue
_QLPreviewBubbleSetDisplayPathAndAdditionalString
_QLPreviewBubbleSetDoubleClickHandler
_QLPreviewBubbleSetLoadedHandler
_QLPreviewBubbleSetWillOpenURLHandler
_QLPreviewBubbleShow
_QLPreviewCancel
_QLPreviewCopyDictionaryRepresentation
_QLPreviewCopyDocumentURL
_QLPreviewCopyProperties
_QLPreviewCopyURLRepresentation
_QLPreviewCreate
_QLPreviewCreateUniqueAttachmentURL
_QLPreviewDiscardAllPendingActions
_QLPreviewFreePreviewData
_QLPreviewGetDisplayBundleID
_QLPreviewGetInlinePreviewSupportedContentTypes
_QLPreviewGetLastError
_QLPreviewGetLoadingPlaceholder
_QLPreviewGetPreviewDataForMIG
_QLPreviewGetPreviewSizeHint
_QLPreviewIsPreferringDarkLoading
_QLPreviewIsWithinContentTypeLimit
_QLPreviewSetContentTypeLimits
_QLPreviewSetDisplayBundleID
_QLPreviewSetForceContentTypeUTI
_QLPreviewSetPreviewDataAndURLFromMIG
_QLPreviewSetServer
_QLPreviewTypeDisplayBundleWantsToBeResized
_QLPreviewTypeGetDisplayBundleCount
_QLPreviewTypeGetDisplayBundleIDForUTI
_QLPreviewTypeGetDisplayBundleIDsAndNames
_QLPreviewTypeIsDisplayBundleIDSafe
_QLPreviewUpdateWithDictionaryRepresentation
_QLPushRoundedRect
_QLSandboxTokenCreateFileRead
_QLScaleRect
_QLSeamlessClosingRequestDiscardRequestsWithAssociatedObject
_QLSeamlessClosingRequestGetAssociatedObject
_QLSeamlessClosingRequestSetAssociatedObject
_QLSeamlessClosingRequestSetHandler
_QLSeamlessOpeningDisplayStateIsFullScreenKey
_QLSeamlessOpeningDisplayStatePageKey
_QLSeamlessOpeningDisplayStatePasswordKey
_QLSeamlessOpeningDisplayStateScreenFrameKey
_QLSeamlessOpeningDisplayStateScrollKey
_QLSeamlessOpeningDisplayStateTimeKey
_QLSeamlessOpeningRequestBindToPID
_QLSeamlessOpeningRequestCreate
_QLSeamlessOpeningRequestDiscard
_QLSeamlessOpeningRequestGetClosingRequest
_QLSeamlessOpeningRequestOpenItem
_QLSeamlessOpeningRequestSetCompletionHandler
_QLSeamlessOpeningRequestSetDispatchQueue
_QLThumbnailCancel
_QLThumbnailComputeAsync
_QLThumbnailCopyDocumentURL
_QLThumbnailCopyImage
_QLThumbnailCopyOptions
_QLThumbnailCopySpecialGenericImage
_QLThumbnailCreate
_QLThumbnailCreateSpecialGenericIcon
_QLThumbnailGetContentRect
_QLThumbnailGetMaximumSize
_QLThumbnailIsCancelled
_QLThumbnailRequestGetGeneratorBundle
_QLThumbnailSupportsContentUTIAtSize
_QLUIHelperCreateCallbackSource
_QLUIHelperExecuteMachBlock
_QLUIHelperIsAvailable
_QLUIHelperRegisterForHelperDeath
_QLUIHelperServerDemux
_QLUIHelperUnregisterFromHelperDeath
_QTUICopyMeasurements
_QTUIDraw
_QTUIIsFlippedKey
_QTUIMeasurementThumbBoundsKey
_QTUIMeasurementTrackBoundsKey
_QTUIStateActive
_QTUIStateDisabled
_QTUIStateKey
_QTUIStatePressed
_QTUIValueKey
_QTUIWidgetKey
_QTUIWidgetSlider
_QTUIWidgetSliderHighlightedRangesKey
_ReleaseIconRef
_SPReportStuckProcess
_SPReportUnstuckProcess
_SSGetFullySimplifiedStringForURL
_UTTypeConformsTo
__Block_copy
__Block_object_assign
__Block_object_dispose
__Block_release
__CFXPCCreateCFObjectFromXPCObject
__CSBackToMyMacCopyDomain
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSDictionaryOfVariableBindings
__NSRecommendedScrollerStyle
__QLAppPreferencesBooleanValueForKey
__QLAppPreferencesFloatValueForKey
__QLAppPreferencesIntValueForKey
__QLCrashForGoodReason
__QLCreateCFStringFromQLStringFromMIG
__QLCreateCFURLFromQLURLFromMIG
__QLCreateDictionaryFromPlistBytesFromMIG
__QLCreateImageFromBitmapDataFromMIG
__QLCreateQLImageFromCGImageForMIG
__QLCreateQLStringFromCFStringForMIG
__QLCreateQLURLFromCFURLForMIG
__QLDestroyMallocedBitmapContext
__QLDictionaryBooleanValueForKey
__QLDictionaryValueForKey
__QLDumpMachPortRights
__QLFreeQLImageForMIG
__QLFreeQLStringForMIG
__QLFreeQLStringFromMIG
__QLFreeQLURLForMIG
__QLFreeQLURLFromMIG
__QLGeneratorCopyGeneratorForFile
__QLGeneratorCopyPreviewUsingSchemeHandler
__QLGeneratorCopyPreviewUsingSchemeHandlerForURL
__QLGeneratorCopyThumbnailUsingSchemeHandler
__QLGlobalQuickLookPreferencesBooleanValueForKey
__QLIsRunningForDebug
__QLIsUIProcess
__QLMainLocalizedString
__QLRaiseAssert
__QLRegisterForQuickLookGlobalNotification
__QLSimpleCrash
__QLThumbnailCopyUTIIfPresent
__QLThumbnailGetFlavor
__QLThumbnailImageCreateWithImageIO
__Unwind_Resume
___CFConstantStringClassReference
___QLLog_base
___QLQuickLookLogDomain
___QLSandboxLogDomain
___QLSeamlessOpeningLogDomain
___QLShouldLogForLevel
___bzero
___error
___objc_personality_v0
___sincos_stret
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__dispatch_queue_attr_concurrent
__dispatch_source_type_mach_send
__dispatch_source_type_timer
__dispatch_source_type_vnode
__objc_empty_cache
__xpc_error_connection_interrupted
__xpc_error_connection_invalid
__xpc_type_dictionary
__xpc_type_error
_bootstrap_look_up
_bootstrap_port
_bootstrap_strerror
_ceil
_class_addMethod
_class_getInstanceMethod
_class_getMethodImplementation
_class_getSuperclass
_clock_get_time
_close
_cos
_dispatch_after
_dispatch_async
_dispatch_barrier_async
_dispatch_barrier_sync
_dispatch_get_current_queue
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_queue_get_label
_dispatch_release
_dispatch_resume
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_get_data
_dispatch_source_set_timer
_dispatch_suspend
_dispatch_sync
_dispatch_time
_dlopen
_dlsym
_floor
_fmax
_fmin
_free
_getpid
_host_get_clock_service
_hypot
_kCAAlignmentCenter
_kCAAnimationDiscrete
_kCAAnimationLinear
_kCAFillModeForwards
_kCAFilterGaussianBlur
_kCAFilterLanczos
_kCAFilterMultiplyColor
_kCAFilterTrilinear
_kCAGravityCenter
_kCAGravityResizeAspect
_kCAGravityResizeAspectFill
_kCAMediaTimingFunctionEaseInEaseOut
_kCAMediaTimingFunctionEaseOut
_kCATransactionAnimationDuration
_kCAValueFunctionRotateZ
_kCFAllocatorDefault
_kCFBooleanFalse
_kCFBooleanTrue
_kCFBundleIdentifierKey
_kCFCopyStringDictionaryKeyCallBacks
_kCFPreferencesCurrentApplication
_kCFRunLoopCommonModes
_kCFRunLoopDefaultMode
_kCFTypeDictionaryValueCallBacks
_kCFURLIsHiddenKey
_kCGColorBlack
_kCGColorSpaceGenericGray
_kCGColorWhite
_kCTFontAttributeName
_kCTForegroundColorAttributeName
_kDADiskDescriptionVolumePathKey
_kQLDisplayBundle3D
_kQLDisplayBundleAudio
_kQLDisplayBundleContact
_kQLDisplayBundleEvent
_kQLDisplayBundleGeneric
_kQLDisplayBundleIcon
_kQLDisplayBundleImage
_kQLDisplayBundleMap
_kQLDisplayBundleMovie
_kQLDisplayBundlePDF
_kQLDisplayBundleReminder
_kQLDisplayBundleText
_kQLDisplayBundleWeb
_kQLDisplayBundleWeb2
_kQLPreviewAttachmentMagic
_kQLPreviewBubbleAnimationTypeCustomScale
_kQLPreviewBubbleAnimationTypeFade
_kQLPreviewBubbleAnimationTypePop
_kQLPreviewBubbleAnimationTypeScale
_kQLPreviewBubbleAnimationTypeUnfold
_kQLPreviewBubbleAppearanceTypeDark
_kQLPreviewBubbleAppearanceTypeLight
_kQLPreviewBubbleOptionAimPoint
_kQLPreviewBubbleOptionAnimationType
_kQLPreviewBubbleOptionAppearanceType
_kQLPreviewBubbleOptionAutoplays
_kQLPreviewBubbleOptionButtons
_kQLPreviewBubbleOptionCustomScaleContentFrame
_kQLPreviewBubbleOptionCustomScaleFrame
_kQLPreviewBubbleOptionForcePreferredEdge
_kQLPreviewBubbleOptionMaxArea
_kQLPreviewBubbleOptionMaxSize
_kQLPreviewBubbleOptionPreferredEdge
_kQLPreviewBubbleOptionPreloadedURLs
_kQLPreviewBubbleOptionPreviewData
_kQLPreviewBubbleOptionPreviewProperties
_kQLPreviewBubbleOptionPreviewType
_kQLPreviewBubbleOptionSkipAnimationInvoke
_kQLPreviewBubbleOptionWindowLevel
_kQLPreviewBubbleOptionsSkipAlphaDuringOpenAnimation
_kQLPreviewContentIDScheme
_kQLPreviewMagic
_kQLPreviewOptionAllowsProgressiveRendering
_kQLPreviewOptionContentTypeUTI
_kQLPreviewOptionPasswordKey
_kQLPreviewPropertyAllowFullFileAccessKey
_kQLPreviewPropertyAllowJavascriptKey
_kQLPreviewPropertyAllowNetworkAccessKey
_kQLPreviewPropertyAllowPlugInsKey
_kQLPreviewPropertyAutoSizeKey
_kQLPreviewPropertyBaseBundlePathKey
_kQLPreviewPropertyCanBeTransparentBackgroundKey
_kQLPreviewPropertyDisplayNameKey
_kQLPreviewPropertyHeightKey
_kQLPreviewPropertyLoadingPlaceholderImage
_kQLPreviewPropertyLoadingShouldDarken
_kQLPreviewPropertyStyleSheetURLKey
_kQLPreviewPropertySubTitleKey
_kQLPreviewPropertyTitleKey
_kQLPreviewPropertyWidthKey
_kQLPreviewScheme
_kQLSeamlessOpeningAnimationTypeKey
_kQLSeamlessOpeningDisplayStateKey
_kQLSeamlessOpeningDisplayStateScreenFrameKey
_kQLSeamlessOpeningWindowLevelKey
_kQLThumbnailOptionContentTypeUTI
_kQLThumbnailOptionIconModeKey
_kQLThumbnailOptionScaleFactorKey
_kQLTypeLocation
_kUTTypeApplication
_kUTTypeArchive
_kUTTypeContact
_kUTTypeContent
_kUTTypeDirectory
_kUTTypeDiskImage
_kUTTypeFolder
_kUTTypeHTML
_kUTTypeImage
_kUTTypeItem
_kUTTypePackage
_kUTTypeVCard
_kUTTypeVolume
_mach_error_string
_mach_host_self
_mach_msg
_mach_port_allocate
_mach_port_deallocate
_mach_port_mod_refs
_mach_task_self_
_memchr
_memcpy
_method_getTypeEncoding
_mig_dealloc_reply_port
_mig_deallocate
_mig_get_reply_port
_mig_put_reply_port
_mig_strncpy
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_atomicCompareAndSwapGlobal
_objc_atomicCompareAndSwapInstanceVariable
_objc_atomicCompareAndSwapPtrBarrier
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_copyStruct
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_getAssociatedObject
_objc_getClass
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper
_objc_msgSendSuper2
_objc_msgSendSuper2_stret
_objc_msgSend_stret
_objc_read_weak
_objc_setAssociatedObject
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_open
_pow
_pthread_main_np
_ql_dispatch_async
_ql_dispatch_once
_ql_dispatch_source_set_cancel_handler
_ql_dispatch_source_set_event_handler
_ql_dispatch_sync
_qlstaticqueue
_rint
_round
_sel_getName
_sin
_sleep
_statfs$INODE64
_strerror
_vm_allocate
_vm_deallocate
_voucher_mach_msg_set
_xpc_connection_cancel
_xpc_connection_create
_xpc_connection_resume
_xpc_connection_send_message_with_reply
_xpc_connection_set_event_handler
_xpc_connection_set_finalizer_f
_xpc_connection_set_legacy
_xpc_dictionary_create
_xpc_dictionary_get_value
_xpc_get_type
_xpc_release
_xpc_string_create
dyld_stub_binder
