# FTT Samples

Sample terrains and other content for
[Flynn's Terrain Tools](https://github.com/Naviata/FTT-Releases) — more will be added here over time,
each in a folder of its own.

## FTT_TerrainSample

A ready-made DayZ terrain to start from: a 2048 × 2048 heightfield at 10 m, so 20,480 m across, with
its TerrainBuilder project, `layers.cfg`, `config.cpp`, central economy files, exported layers and
188 measured template libraries.

### Download it

**Get `FTT_TerrainSample.rar` from [Releases](https://github.com/Naviata/FTT-Samples/releases)** —
not the green *Code* button. The download is the whole sample; the folder in this repository is not.
It leaves out:

- `terrain/source/Imagery/ftt_heightmap.asc` — **the heightfield. A terrain cannot be opened without
  it**, in FTT or in TerrainBuilder.
- the exported layers in `data/`
- two TerrainBuilder files too big for a repository, which refuses anything over 100 MB: a 704 MB
  `ftt_terrainsample_009.v4d` and a 262 MB cache block

Extract it so it sits at **`P:\FTT_TerrainSample`**. That is where FTT looks for it; anywhere else
works too, but you will be asked where you put it.

It is a `.rar`. Windows 11 opens those itself; on Windows 10 use [7-Zip](https://www.7-zip.org), which
is free.

### Using it in FTT

**Terrain Creation → Create Terrain Source → From the FTT sample.** FTT copies what a terrain needs
under a new name and renames it through the configs, so the sample itself is left untouched and can
be used again.

### What is left out, deliberately

These folders are kept, empty, so the layout is the one TerrainBuilder and FTT expect:

| Folder | What is missing |
|---|---|
| `terrain/source/Imagery` | The satellite map and surface mask — yours to make. The download carries the heightmap. |
| `terrain/source/QGIS` | The GIS project the terrain was built from |
| `terrain/source/gtt_export` | Working exports from the terrain generator |

`navmesh`, `terrain/source/L3DT` and `terrain/source/LandBuilder` are empty in the original too.
