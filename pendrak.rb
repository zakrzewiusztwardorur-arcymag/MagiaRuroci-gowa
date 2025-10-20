class DataVault
  def initialize
    @danych = ["tajne1", "tajne2", "tajne3"]
  end

  def display
    @danych.each { |d| puts d }
  end
end

vault = DataVault.new
vault.display
