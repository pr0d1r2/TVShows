/*
 *  This file is part of the TVShows 2 ("Phoenix") source code.
 *  http://github.com/mattprice/TVShows/
 *
 *  TVShows is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with TVShows. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#import <Cocoa/Cocoa.h>


@interface PTViewSubclass : NSView
{
    NSColor *startingColor;
    NSColor *endingColor;
    int angle;
    
    NSColor *topBorderColor;
    NSColor *bottomBorderColor;
}

@property (nonatomic, retain) NSColor *startingColor;
@property (nonatomic, retain) NSColor *endingColor;
@property (assign) int angle;

@property (nonatomic, retain) NSColor *topBorderColor;
@property (nonatomic, retain) NSColor *bottomBorderColor;

@end